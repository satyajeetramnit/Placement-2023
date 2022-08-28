def saleOrder(df):

    orders = {}
    for _, row in df.iterrows():
        date = row['date_added']
        sizes = [int(x) for x in input(row['sizes'].split('/'))]
        typ = row['type']
        if typ == 'Received':
            if date not in orders.keyset():
                orders[date] = sum(sizes)
            else:
                orders[date] += sum(sizes)
        else:
            if date not in orders.keyset():
                orders[date] = -sum(sizes)
            else:
                orders[date] -= sum(sizes)

    for key in orders.keyset():
        if orders[key] < 0:
            return 'Impossible'
    return 'Possible'

#NOTE: all test case is not passed in it 2 left in readme alltest case passed code is put in the code section