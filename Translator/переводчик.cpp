#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	short word, selection;
	cout << "выберите тип перевода:"<<endl;
	cout << "[1] - с русского на английский" << endl;
	cout << "[2] - с английского на русский" << endl;
	cout << "[3] - выйти"<< endl<< endl;
	cin >> selection;
	cout << endl;
	switch (selection)
	{
	case 1:
		cout << "Выберите слово" << endl;
		cout << "[1] дом " << endl;
		cout << "[2] дверь " << endl;
		cout << "[3] ковер " << endl;
		cout << "[4] замок" << endl;
		cout << "[5] ключи " << endl;
		cout << "[6] ботинки " << endl;
		cout << "[7] куртка" << endl;
		cout << "[8] вешалка" << endl;
		cout << "[9] шкаф" << endl;
		cout << "[10] руки" << endl;
		cout << "[11] мыло" << endl;
		cout << "[12] полотенце" << endl;
		cout << "[13] вода" << endl;
		cout << "[14] кровать" << endl;
		cout << "[15] пицца" << endl;
		cin >> word;
		switch (word)
		{
		case 1:
			cout << "house" << endl;
			break;
		case 2:
			cout << "door" << endl;
			break;
		case 3:
			cout << "carpet" << endl;
			break;
		case 4:
			cout << "lock" << endl;
			break;
		case 5:
			cout << "keys" << endl;
			break;
		case 6:
			cout << "boots" << endl;
			break;
		case 7:
			cout << "jacket" << endl;
			break;
		case 8:
			cout << "hanger" << endl;
			break;
		case 9:
			cout << "wardrobe" << endl;
			break;
		case 10:
			cout << "hands" << endl;
			break;
		case 11:
			cout << "soap" << endl;
			break;
		case 12:
			cout << "towel" << endl;
			break;
		case 13:
			cout << "water" << endl;
			break;
		case 14:
			cout << "bed" << endl;
			break;
		case 15:
			cout << "pizza" << endl;
			break;
		default:
			cout << "Пишите пожалуйста числа от 1 до 15(Пригодиться при переводе на русский)\n P.S. старче"<<endl;
			break;
		}

		break;
	case 2:
		cout << "Выберите слово" << endl;
		
		cout << "[1] house " << endl;
		cout << "[2] door " << endl;
		cout << "[3] carpet " << endl;
		cout << "[4] lock" << endl;
		cout << "[5] keys " << endl;
		cout << "[6] woman " << endl;
		cout << "[7] jacket" << endl;
		cout << "[8] hanger" << endl;
		cout << "[9] wardrobe" << endl;
		cout << "[10] hands" << endl;
		cout << "[11] soap" << endl;
		cout << "[12] towel" << endl;
		cout << "[13] water" << endl;
		cout << "[14] bed" << endl;
		cout << "[15] pizza" << endl;
		cin >> word;

		switch (word)
		{
		case 1:
			cout << "место святое да крепость твоя" << endl;
			break;
		case 2:
			cout << "деревяшка с ручкой" << endl;
			break;
		case 3:
			cout << "ткань напольная" << endl;
			break;
		case 4:
			cout << "страж молчаливый" << endl;
			break;
		case 5:
			cout << "взятка для стража" << endl;
			break;
		case 6:
			cout << "Посудомойка, да кулинарка кудесница, но ей это не говори, да не зли иначе ночью может ведьмою обернуться" << endl;
			break;
		case 7:
			cout << "накидка кожана" << endl;
			break;
		case 8:
			cout << "искуствнные плечи для накидки" << endl;
			break;
		case 9:
			cout << "хранилище плеч искусственных" << endl;
			break;
		case 10:
			cout << "хваталки твои (настоящие)" << endl;
			break;
		case 11:
			cout << "брикет диковинный, шо руки чистит да аромат душистый придает" << endl;
			break;
		case 12:
			cout << "ткань для тела иссушающая" << endl;
			break;
		case 13:
			cout << "жидкость животворящая" << endl;
			break;
		case 14:
			cout << "святилище ночное" << endl;
			break;
		case 15:
			cout << "еда божественная" << endl;
			break;
		default:
			cout << "лоб здоровый да дурной, слушай старче да числа пиши " << endl;
			cout << "P.S. Алексеев Дмитриевичей не касается";
			break;
		}
		break;
	case 3:
		cout << "" << endl;
		return 228;
		break;
	default:
		cout << "лоб здоровый да дурной, слушай старче да числа пиши (от аз[1] по глаголь[3])"<<endl;
		cout << "P.S. Алексеев Дмитриевичей не касается";

		break;
	}





	
}