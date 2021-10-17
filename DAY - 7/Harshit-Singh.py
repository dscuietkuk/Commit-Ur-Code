for _ in range(int(input())):               # R has range 2<R<10^6
    L,R=map(int,input().split(' '))         # Any Number greater Than R can't be a factor of any number in range of L and R
    print("1000003")                        # Now for cofactors we will choose a prime number just after 10^6
                                            # As prime Numbers have only two factors 1 and itself So any number in range
                                            # L and R will not have any cofactors as to that prime Number