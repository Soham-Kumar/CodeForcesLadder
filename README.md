# CodeForcesLadder

- #include<chrono>
- auto start = chrono::steady_clock::now();
- cout <<endl;
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;

