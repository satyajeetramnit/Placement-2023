import { Suspense } from "react";
import { Route, Switch, Redirect } from "react-router-dom";
// import App from "./App";
import Display from "./components/Display";

function Routes() {
  return (
    <Suspense fallback={"<h1>Loading</h1>"}>
      <Switch>
        <Route path="/" exact>
          <Redirect to="/home"></Redirect>
        </Route>
        <Route path="/result" exact component={Display} />
      </Switch>
    </Suspense>
  );
}

export default Routes;
