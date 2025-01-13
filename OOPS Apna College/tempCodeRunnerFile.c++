    Hero *b = new Hero;
    (*b).sethealth(70); //can't use b.sethealth as b stores address
    b->sethealth(79); //both above and this has same meaning
    b->setage(99);
    cout << b->gethealth() << endl;
    cout << b->getage() <<endl;