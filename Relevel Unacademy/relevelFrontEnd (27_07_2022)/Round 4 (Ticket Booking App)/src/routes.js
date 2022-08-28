import { Suspense } from "react";
import { Route, Switch, Redirect } from "react-router-dom";
import Header from "./components/header";
import App from "./App";
import Cart from "./components/cart";

function Routes() {
  return (
    <Suspense fallback={"<h1>Loading</h1>"}>
      <Header />
      <Switch>
        <Route path="/" exact>
          <Redirect to="/home"></Redirect>
        </Route>
        <Route path="/home" exact component={App} />
        <Route path="/cart" exact component={Cart} />
      </Switch>
    </Suspense>
  );
}

export default Routes;
