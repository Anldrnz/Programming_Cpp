https://programming-principles-and-pratice-using-c.readthedocs.io/en/latest/index.html

## Chapter - 3
### Operators & Types

<img src="https://user-images.githubusercontent.com/84193117/178114979-3a3d4e71-cb9a-49df-a65d-a6be97b2c9d6.png" width="600"/>

<img src="https://user-images.githubusercontent.com/84193117/178115339-2069a995-d8f3-41a9-b1c8-52b859f217b9.png" width="600"/>

### Safe conversions
<img src="https://user-images.githubusercontent.com/84193117/178139867-df684028-d254-4620-b511-3f23050e9b21.png" width="600"/>

### Unsafe conversions
<img src="https://user-images.githubusercontent.com/84193117/178140663-4a19ee67-5053-4c59-bf41-5cba84ec1a46.png" width="600"/>

- double to int
- double to char
- double to bool
- int to char
- int to bool
- char to bool

## Chapter - 4
### Constant Expressions
- constexpr is used for constants that are determined at compile time, they cannot be changed ever again.
  - constexpr double pi = 3.14159;
- const can be defined in run time, in a function for example, but cannot be changed once it is defined.
  - <img src="https://user-images.githubusercontent.com/84193117/178259389-409e0836-0433-4da5-af0b-bb23a6713c3e.png" width="600"/>

### Loops
	int i = 0; // the for-statement initializer
	while (i < 100) { // the for-statement condition
		cout << i << '\t' << square(i) << '\n'; // the for-statement body
		++i; // the for-statement increment
	}
	for (int i = 0; i < 100; ++i) { // for i in the [0:100) range
		cout << i << '\t' << square(i) << '\n';
	}

### Vectors
	vector<int> v = { 5, 7, 9, 4, 6, 8 }; // vector of 6 ints
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
	for (int x : v) // for each x in v
		cout << x << '\n';
	v.push_back(2.7); // add an element with the value 2.7 at end (“the back”) of v

	// simple dictionary: list of sorted words, cin loop can be terminated by CTRL + Z
	vector<string> words;
	int iter = 0;
	for (string temp; cin >> temp; )
	{
		words.push_back(temp); // put into vector
		++iter;
		if (iter == 5) {
			for (string elem : words) // for each x in v
				cout << elem << '\n';
			break;
		}
	}
	cout << "Number of words: " << words.size() << '\n';
	sort(words); // sort the words
	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i-1] != words[i]) // is this a new word?
			cout << words[i] << "\n";
