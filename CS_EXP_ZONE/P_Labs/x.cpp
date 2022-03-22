    #include <simplecpp>
    main_program{
        char a = 'a';
        int cnt = 0;
        for (unsigned int i = 1; i <= 65536; i++)
        {
            if (a == 'a')
            {
                cnt++;
            }
            a += 1;
        }
        cout << cnt << endl;
    }