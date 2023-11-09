    int n, pro = 1, sum = 0, r;
    cout << "Enter the number: ";
    cin >> n;
    while(n!=0){
        r = n%10;
        n = n/10;
        pro= pro*r;
        sum= sum + r;
    }
    cout << "Product is : " << pro << endl << "Sum is : " << sum;
    cout << '\n';