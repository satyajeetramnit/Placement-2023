import { StrictMode } from "react";
import ReactDOM from "react-dom";
import { BrowserRouter } from "react-router-dom";

import { createStore, applyMiddleware, compose } from "redux";
import { Provider } from "react-redux";
import { persistStore } from "redux-persist";
import thunk from "redux-thunk";
import reducers from "./reducers/index";
import Routes from "./routes";

const createStoreWithMiddleware = compose(applyMiddleware(thunk)(createStore))(
  reducers
);
persistStore(createStoreWithMiddleware);

const rootElement = document.getElementById("root");
ReactDOM.render(
  <StrictMode>
    <Provider store={createStoreWithMiddleware}>
      <BrowserRouter>
        <Routes />
      </BrowserRouter>
    </Provider>
  </StrictMode>,
  rootElement
);
