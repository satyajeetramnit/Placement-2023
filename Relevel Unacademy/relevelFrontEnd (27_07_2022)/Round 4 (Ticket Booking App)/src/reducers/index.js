const INITIAL_STATE = {
  productList: [],
  cartItems: []
};

export default function reducers(state = INITIAL_STATE, action) {
  switch (action.type) {
    case "PRODUCT":
      return { ...state, productList: action.payload };
    default:
      return state;
  }
}
