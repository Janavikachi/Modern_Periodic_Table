#include<iostream>
#include<windows.h>
#include<cstdlib>
using namespace std;
class elements{
	public:
		void deletefirst();
		void deletespecific();
		void deletelast();
		int create(int);
		void search(int);
		void display();
		void deletenode();
		void displaylist();
		char addnotes(char);
		void displaynotes();
		void deletenotes();
		
};

struct Node{
	int data;
	struct Node *addr;
}*start,*curr,*temp;

struct element{
	char name;
	struct element *addrs;
}*head,*current,*temperory;

elements data;

int main(){
	char note;
	int choice,ch,atomicnumber,bookm=0;
	do{
		label:
		cout<<"\n-----------------------INDEX-------------------------";
		cout<<"\n1-SEARCH ELEMENT \n2-DISPLAY BOOKMARKS\n3-DELETE BOOKMARK\n4-ADD NOTES \n5-DISPLAY NOTES\n6-CLEAR NOTES\n7-EXIT PROGRAM\nEnter the choice :  ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\nEnter the element's atomic number to search : ";
				cin>>atomicnumber;
				cout<<"----------------------------------------------------------\n";
				data.search(atomicnumber);
				if(atomicnumber>1 && atomicnumber<118){
				cout<<"\n\nDo you want to add this element to bookmarks?\n1-YES  0-NO\nYour choice : ";
				cin>>bookm;
				if(bookm==1){
					data.create(atomicnumber);
				}
				}
				cout<<"\n----------------------------------------------------------\n";
				break;

			case 2:
				data.display();
				break;
			case 3:
				if(start==NULL){
				cout<<"\nNo element added to bookmark yet...\n";
				}
				else{
					data.deletenode();
				}
				break;
			case 4:
				cout<<"\n-------------------------------------------------------------\n";
				cout<<"\nonly 100 characters can be added at a time...\nTo stop entering notes simply enter 'E' and press enter... \nData should be entered in small letters...\nPlease start entering notes...\n";
				cout<<"\n(**USE '_' INSTEAD OF SPACE AND BEFORE ENTERING 'E'**)\n";
				for(int i=0;i<100;i++){
					cin>>note;
					if(note=='E'){
						break;
					}
					data.addnotes(note);
				}
				goto label;
				break;
			case 5:
				data.displaynotes();
				break;
			case 6:
				cout<<"DELETING NOTES";Sleep(1000);
				cout<<".";Sleep(1000);
				cout<<".";Sleep(1000);
				cout<<".";
				data.deletenotes();
				break;
			case 7:
				data.deletenotes();
				return 0;
		}
		cout<<"\nEnter 1 to continue with main index : ";
		cin>>ch;
	}while(ch==1);
	data.deletenotes();
	return 0;
}

void elements::search(int atomicnumber){
	switch(atomicnumber){
		case 1:
			cout<<"Name: hydrogen\nSymbol: H\nAtomic number: 1\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 2:
			cout<<"Name: helium\nSymbol: He\nAtomic number: 2\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 3:
			cout<<"Name: lithium\nSymbol: Li\nAtomic number: 3\nStandard state: solid at 298 K\nAppearance: silvery white/grey\nClassification: Metallic";
			break;
		case 4:
			cout<<"Name: beryllium\nSymbol: Be\nAtomic number: 4\nStandard state: solid at 298 K\nAppearance: lead grey\nClassification: Metallic";
			break;
		case 5:
			cout<<"Name: boron\nSymbol: B\nAtomic number: 5\nStandard state: solid at 298 K\nAppearance: black\nClassification: Semi-metallic";
			break;
		case 6:
			cout<<"Name: carbon\nSymbol: CAtomic number: 6\nStandard state: solid at 298 K\nAppearance: graphite is black, diamond is colourless\nClassification: Non-metallic";
			break;
		case 7:
			cout<<"Name: nitrogen\nSymbol: N\nAtomic number: 7\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 8:
			cout<<"Name: oxygen\nSymbol: O\nAtomic number: 8\nStandard state: gas at 298 K\nAppearance: colourless as a gas, liquid is pale blue\nClassification: Non-metallic";
			break;
		case 9:
			cout<<"Name: fluorine\nSymbol: F\nAtomic number: 9\nStandard state: gas at 298 K\nAppearance: pale yellow\nClassification: Non-metallic";
			break;
		case 10:
			cout<<"Name: neon\nSymbol: Ne\nAtomic number: 10\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 11:
			cout<<"Name: sodium\nSymbol: Na\nAtomic number: 11\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 12:
			cout<<"Name: magnesium\nSymbol: Mg\nAtomic number: 12\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 13:
			cout<<"Name: aluminium\nSymbol: Al\nAtomic number: 13\nStandard state: solid at 298 K\nAppearance: silvery\nClassification: Metallic";
			break;
		case 14:
			cout<<"Name: silicon\nSymbol: Si\nAtomic number: 14\nStandard state: solid at 298 K\nAppearance: dark grey with a bluish tinge\nClassification: Semi-metallic";
			break;
		case 15:
			cout<<"Name: phosphorus\nSymbol: P\nAtomic number: 15\nStandard state: solid at 298 K\nAppearance: colourless/red/silvery white\nClassification: Non-metallic";
			break;
		case 16:
			cout<<"Name: sulfur\nSymbol: S\nAtomic number: 16\nStandard state: solid at 298 K\nAppearance: lemon yellow\nClassification: Non-metallic";
			break;
		case 17:
			cout<<"Name: chlorine\nSymbol: Cl\nAtomic number: 17\nStandard state: gas at 298 K\nAppearance: yellowish green\nClassification: Non-metallic";
			break;
		case 18:
			cout<<"Name: argon\nSymbol: Ar\nAtomic number: 18\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 19:
			cout<<"Name: potassium\nSymbol: K\nAtomic number: 19\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 20:
			cout<<"Name: calcium\nSymbol: Ca\nAtomic number: 20\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 21:
			cout<<"Name: scandium\nSymbol: Sc\nAtomic number: 21\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 22:
			cout<<"Name: titanium\nSymbol: Ti\nAtomic number: 22\nStandard state: solid at 298 K\nAppearance: silvery metallic\nClassification: Metallic";
			break;
		case 23:
			cout<<"Name: vanadium\nSymbol: V\nAtomic number: 23\nStandard state: solid at 298 K\nAppearance: silvery grey metallic\nClassification: Metallic";
			break;
		case 24:
			cout<<"Name: chromium\nSymbol: Cr\nAtomic number: 24\nStandard state: solid at 298 K\nAppearance: silvery metallic\nClassification: Metallic";
			break;
		case 25:
			cout<<"Name: manganese\nSymbol: Mn\nAtomic number: 25\nStandard state: solid at 298 K\nAppearance: silvery metallic\nClassification: Metallic";
			break;
		case 26:
			cout<<"Name: iron\nSymbol: Fe\nAtomic number: 26\nStandard state: solid at 298 K\nAppearance: lustrous, metallic, greyish tinge\nClassification: Metallic";
			break;
		case 27:
			cout<<"Name: cobalt\nSymbol: Co\nAtomic number: 27\nStandard state: solid at 298 K\nAppearance: lustrous, metallic, greyish tinge\nClassification: Metallic";
			break;
		case 28:
			cout<<"Name: nickel\nSymbol: Ni\nAtomic number: 28\nStandard state: solid at 298 K\nAppearance: lustrous, metallic, silvery tinge\nClassification: Metallic";
			break;
		case 29:
			cout<<"Name: copper\nSymbol: Cu\nAtomic number: 29\nStandard state: solid at 298 K\nAppearance: copper, metallic\nClassification: Metallic";
			break;
		case 30:
			cout<<"Name: zinc\nSymbol: Zn\nAtomic number: 30\nStandard state: solid at 298 K\nAppearance: bluish pale grey\nClassification: Metallic";
			break;
		case 31:
			cout<<"Name: gallium\nSymbol: Ga\nAtomic number: 31\nStandard state: solid at 298 K (but melts only slightly above this temperature)\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 32:
			cout<<"Name: germanium\nSymbol: Ge\nAtomic number: 32\nStandard state: solid at 298 K\nAppearance: greyish white\nClassification: Semi-metallic";
			break;
		case 33:
			cout<<"Name: arsenic\nSymbol: As\nAtomic number: 33\nStandard state: solid at 298 K\nAppearance: metallic grey\nClassification: Semi-metallic";
			break;
		case 34:
			cout<<"Name: selenium\nSymbol: Se\nAtomic number: 34\nStandard state: solid at 298 K\nAppearance: grey, metallic lustre\nClassification: Non-metallic";
			break;
		case 35:
			cout<<"Name: bromine\nSymbol: Br\nAtomic number: 35\nStandard state: liquid at 298 K\nAppearance: red-brown, metallic lustre when solid\nClassification: Non-metallic";
			break;
		case 36:
			cout<<"Name: krypton\nSymbol: Kr\nAtomic number: 36\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 37:
			cout<<"Name: rubidium\nSymbol: Rb\nAtomic number: 37\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 38:
			cout<<"Name: strontium\nSymbol: Sr\nAtomic number: 38\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 39:
			cout<<"Name: yttrium\nSymbol: Y\nAtomic number: 39\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 40:
			cout<<"Name: zirconium\nSymbol: Zr\nAtomic number: 40\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 41:
			cout<<"Name: niobium\nSymbol: Nb\nAtomic number: 41\nStandard state: solid at 298 K\nAppearance: grey metallic\nClassification: Metallic";
			break;
		case 42:
			cout<<"Name: molybdenum\nSymbol: Mo\nAtomic number: 42\nStandard state: solid at 298 K\nAppearance: grey metallic\nClassification: Metallic";
			break;
		case 43:
			cout<<"Name: technetium\nSymbol: Tc\nAtomic number: 43\nStandard state: solid at 298 K\nAppearance: silvery grey metallic\nClassification: Metallic";
			break;
		case 44:
			cout<<"Name: ruthenium\nSymbol: Ru\nAtomic number: 44\nStandard state: solid at 298 K\nAppearance: silvery white metallic\nClassification: Metallic";
			break;
		case 45:
			cout<<"Name: rhodium\nSymbol: Rh\nAtomic number: 45\nStandard state: solid at 298 K\nAppearance: silvery white metallic\nClassification: Metallic";
			break;
		case 46:
			cout<<"Name: palladium\nSymbol: Pd\nAtomic number: 46\nStandard state: solid at 298 K\nAppearance: silvery white metallic\nClassification: Metallic";
			break;
		case 47:
			cout<<"Name: silver\nSymbol: Ag\nAtomic number: 47\nStandard state: solid at 298 K\nAppearance: silver\nClassification: Metallic";
			break;
		case 48:
			cout<<"Name: cadmium\nSymbol: Cd\nAtomic number: 48\nStandard state: solid at 298 K\nAppearance: silvery grey metallic\nClassification: Metallic";
			break;
		case 49:
			cout<<"Name: indium\nSymbol: In\nAtomic number: 49\nStandard state: solid at 298 K\nAppearance: silvery lustrous grey\nClassification: Metallic";
			break;
		case 50:
			cout<<"Name: tin\nSymbol: Sn\nAtomic number: 50\nStandard state: solid at 298 K\nAppearance: silvery lustrous grey\nClassification: Metallic";
			break;
		case 51:
			cout<<"Name: antimony\nSymbol: Sb\nAtomic number: 51\nStandard state: solid at 298 K\nAppearance: silvery lustrous grey\nClassification: Semi-metallic";
			break;
		case 52:
			cout<<"Name: tellurium\nSymbol: Te\nAtomic number: 52\nStandard state: solid at 298 K\nAppearance: silvery lustrous grey\nClassification: Semi-metallic";
			break;
		case 53:
			cout<<"Name: iodine\nSymbol: I\nAtomic number: 53\nStandard state: solid at 298 K\nAppearance: violet-dark grey, lustrous\nClassification: Non-metallic";
			break;
		case 54:
			cout<<"Name: xenon\nSymbol: Xe\nAtomic number: 54\nStandard state: gas at 298 K\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 55:
			cout<<"Name: caesium\nSymbol: Cs\nAtomic number: 55\nStandard state: solid at 298 K (but melts only slightly above this temperature)\nAppearance: silvery gold\nClassification: Metallic";
			break;
		case 56:
			cout<<"Name: barium\nSymbol: Ba\nAtomic number: 56\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 57:
			cout<<"Name: lanthanum\nSymbol: La\nAtomic number: 57\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 58:
			cout<<"Name: cerium\nSymbol: Ce\nAtomic number: 58\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 59:
			cout<<"Name: praseodymium\nSymbol: Pr\nAtomic number: 59\nStandard state: solid at 298 K\nAppearance: silvery white, yellowish tinge\nClassification: Metallic";
			break;
		case 60:
			cout<<"Name: neodymium\nSymbol: Nd\nAtomic number: 60\nStandard state: solid at 298 K\nAppearance: silvery white, yellowish tinge\nClassification: Metallic";
			break;
		case 61:
			cout<<"Name: promethium\nSymbol: Pm\nAtomic number: 61\nStandard state: solid at 298 K\nAppearance: metallic\nClassification: Metallic";
			break;
		case 62:
			cout<<"Name: samarium\nSymbol: Sm\nAtomic number: 62\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 63:
			cout<<"Name: europium\nSymbol: Eu\nAtomic number: 63\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 64:
			cout<<"Name: gadolinium\nSymbol: Gd\nAtomic number: 64\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 65:
			cout<<"Name: terbium\nSymbol: Tb\nAtomic number: 65\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 66:
			cout<<"Name: dysprosium\nSymbol: Dy\nAtomic number: 66\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 67:
			cout<<"Name: holmium\nSymbol: Ho\nAtomic number: 67\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 68:
			cout<<"Name: erbium\nSymbol: Er\nAtomic number: 68\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 69:
			cout<<"Name: thulium\nSymbol: Tm\nAtomic number: 69\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 70:
			cout<<"Name: ytterbium\nSymbol: Yb\nAtomic number: 70\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 71:
			cout<<"Name: lutetium\nSymbol: Lu\nAtomic number: 71\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 72:
			cout<<"Name: hafnium\nSymbol: Hf\nAtomic number: 72\nStandard state: solid at 298 K\nAppearance: grey steel\nClassification: Metallic";
			break;
		case 73:
			cout<<"Name: tantalum\nSymbol: Ta\nAtomic number: 73\nStandard state: solid at 298 K\nAppearance: grey blue\nClassification: Metallic";
			break;
		case 74:
			cout<<"Name: tungsten\nSymbol: W\nAtomic number: 74\nStandard state: solid at 298 K\nAppearance: greyish white, lustrous\nClassification: Metallic";
			break;
		case 75:
			cout<<"Name: rhenium\nSymbol: Re\nAtomic number: 75\nStandard state: solid at 298 K\nAppearance: greyish white\nClassification: Metallic";
			break;
		case 76:
			cout<<"Name: osmium\nSymbol: Os\nAtomic number: 76\nStandard state: solid at 298 K\nAppearance: bluish grey\nClassification: Metallic";
			break;
		case 77:
			cout<<"Name: iridium\nSymbol: Ir\nAtomic number: 77\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 78:
			cout<<"Name: platinum\nSymbol: Pt\nAtomic number: 78\nStandard state: solid at 298 K\nAppearance: greyish white\nClassification: Metallic";
			break;
		case 79:
			cout<<"Name: gold\nSymbol: Au\nAtomic number: 79\nStandard state: solid at 298 K\nAppearance: gold\nClassification: Metallic";
			break;
		case 80:
			cout<<"Name: mercury\nSymbol: Hg\nAtomic number: 80\nStandard state: liquid at 298 K (the heaviest known elemental liquid)\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 81:
			cout<<"Name: thallium\nSymbol: Tl\nAtomic number: 81\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 82:
			cout<<"Name: lead\nSymbol: Pb\nAtomic number: 82\nStandard state: solid at 298 K\nAppearance: bluish white\nClassification: Metallic";
			break;
		case 83:
			cout<<"Name: bismuth\nSymbol: Bi\nAtomic number: 83\nStandard state: solid at 298 K\nAppearance: lustrous reddish white\nClassification: Metallic";
			break;
		case 84:
			cout<<"Name: polonium\nSymbol: Po\nAtomic number: 84\nStandard state: solid at 298 K\nAppearance: silvery\nClassification: Metallic";
			break;
		case 85:
			cout<<"Name: astatine\nSymbol: At\nAtomic number: 85\nStandard state: solid at 298 K\nAppearance: metallic\nClassification: Semi-metallic";
			break;
		case 86:
			cout<<"Name: radon\nSymbol: Rn\nAtomic number: 86\nStandard state: gas at 298 K (the heaviest known mononuclear gas at 298 K)\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 87:
			cout<<"Name: francium\nSymbol: Fr\nAtomic number: 87\nStandard state: solid at 298 K\nAppearance: metallic\nClassification: Metallic";
			break;
		case 88:
			cout<<"Name: radon\nSymbol: Rn\nAtomic number: 86\nStandard state: gas at 298 K (the heaviest known mononuclear gas at 298 K)\nAppearance: colourless\nClassification: Non-metallic";
			break;
		case 89:
			cout<<"Name: actinium\nSymbol: Ac\nAtomic number: 89\nStandard state: solid at 298 K\nAppearance: silvery\nClassification: Metallic";
			break;
		case 90:
			cout<<"Name: thorium\nSymbol: Th\nAtomic number: 90\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 91:
			cout<<"Name: protactinium\nSymbol: Pa\nAtomic number: 91\nStandard state: solid at 298 K\nAppearance: silvery metallic\nClassification: Metallic";
			break;
		case 92:
			cout<<"Name: uranium\nSymbol: U\nAtomic number: 92\nStandard state: solid at 298 K\nAppearance: metallic grey\nClassification: Metallic";
			break;
		case 93:
			cout<<"Name: neptunium\nSymbol: Np\nAtomic number: 93\nStandard state: solid at 298 K\nAppearance: silvery metallic\nClassification: Metallic";
			break;
		case 94:
			cout<<"Name: plutonium\nSymbol: Pu\nAtomic number: 94\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 95:
			cout<<"Name: americium\nSymbol: Am\nAtomic number: 95\nStandard state: solid at 298 K\nAppearance: silvery white\nClassification: Metallic";
			break;
		case 96:
			cout<<"Name: curium\nSymbol: Cm\nAtomic number: 96\nStandard state: solid at 298 K\nAppearance: silver\nClassification: Metallic";
			break;
		case 97:
			cout<<"Name: berkelium\nSymbol: Bk\nAtomic number: 97\nStandard state: solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 98:
			cout<<"Name: californium\nSymbol: Cf\nAtomic number: 98\nStandard state: solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 99:
			cout<<"Name: einsteinium\nSymbol: Es\nAtomic number: 99\nStandard state: solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 100:
			cout<<"Name: fermium\nSymbol: Fm\nAtomic number: 100\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 101:
			cout<<"Name: mendelevium\nSymbol: Md\nAtomic number: 101\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 102:
			cout<<"Name: nobelium\nSymbol: No\nAtomic number: 102\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 103:
			cout<<"Name: lawrencium\nSymbol: Lr\nAtomic number: 103\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 104:
			cout<<"Name: rutherfordium\nSymbol: Rf\nAtomic number: 104\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 105:
			cout<<"Name: dubnium\nSymbol: Db\nAtomic number: 105\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 106:
			cout<<"Name: seaborgium\nSymbol: Sg\nAtomic number: 106\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 107:
			cout<<"Name: bohrium\nSymbol: Bh\nAtomic number: 107\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 108:
			cout<<"Name: hassium\nSymbol: Hs\nAtomic number: 108\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 109:
			cout<<"Name: meitnerium\nSymbol: Mt\nAtomic number: 109\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 110:
			cout<<"Name: darmstadtium\nSymbol: Ds\nAtomic number: 110\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 111:
			cout<<"Name: roentgenium\nSymbol: Rg\nAtomic number: 111\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 112:
			cout<<"Name: copernicium\nSymbol: Cn\nAtomic number: 112\nStandard state: presumably a liquid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 113:
			cout<<"Name: nihonium\nSymbol: Nh\nAtomic number: 113\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 114:
			cout<<"Name: flerovium\nSymbol: Fl\nAtomic number: 114\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 115:
			cout<<"Name: moscovium\nSymbol: Mc\nAtomic number: 115\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 116:
			cout<<"Name: livermorium\nSymbol: Lv\nAtomic number: 116\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and silvery white or grey in appearance\nClassification: Metallic";
			break;
		case 117:
			cout<<"Name: tennessine\nSymbol: Ts\nAtomic number: 117\nStandard state: presumably a solid at 298 K\nAppearance: unknown, but probably metallic and dark in appearance\nClassification: Unknown";
			break;
		case 118:
			cout<<"Name: oganesson\nSymbol: Og\nAtomic number: 118\nStandard state: presumably a gas at 298 K\nAppearance: unknown, but probably a colourless gas\nClassification: Non-metallic";
			break;
		default:
			cout<<"ELEMENT NOT DISCOVERED YET...";

	}
}

int elements::create(int n){

	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=n;
	temp->addr=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		curr=start;
		while(curr->addr!=NULL){

			curr=curr->addr;
		}
		curr->addr=temp;
	}
}

void elements::display(){
	int n=1;
	if(start==NULL){
		cout<<"\nNo element added to bookmark yet...\n";
	}
	else{
		curr=start;
		while(curr!=NULL){
			cout<<n<<" :"<<endl;
			cout<<endl<<curr->data<<endl;
			search(curr->data);
			cout<<"\n-----------------------------------------------------------------------\n";
			curr=curr->addr;
			n++;
		}

	}
}

void elements::deletenode(){
	int ch,deletebm;
	data.displaylist();
	do{
		cout<<"\n---------------------------------------------------------";
		cout<<"\n1-DELETE 1st BOOKMARK\n2-DELETE SPECIFIC BOOKMARK\n3-DELETE RECENT BOOKMARK\nEnter the choice : ";
		cin>>deletebm;
		switch(deletebm){
			case 1:
				data.deletefirst();
				break;
			case 2:				
				data.deletespecific();
				break;
			case 3:
				data.deletelast();
				break;
			default:
				cout<<"\nOPTION NOT GIVEN...";
		}
		cout<<"\nEnter 1 to continue with deleting or any other number to go to main index : ";
		cin>>ch;
	}while(ch==1);	
}	

void elements::deletefirst(){
	temp=start;
	start=start->addr;
	temp->addr=NULL;
	free(temp);
	cout<<"\n1st BOOKMARK DELETED...\n";
	data.displaylist();
}

void elements::deletespecific(){
	int index,i=1;
	cout<<"\nEnter sr.no of the bookmark to delete : ";
	cin>>index;
	if(index==1){
		data.deletefirst();
	}
	else{
		curr=start;
		temp=NULL;
		while(i<index){
		temp=curr;
		curr=curr->addr;
		i++;
	}
	temp->addr=curr->addr;
	free(curr);
	cout<<"\nDESIRED BOOKMARK DELETED...\n";
	data.displaylist();
	}
}

void elements::deletelast(){
	curr=start;
	temp=NULL;
	while(curr->addr!=NULL){
		temp=curr;
		curr=curr->addr;
	}
	temp->addr=NULL;
	free(curr);
	cout<<"\nRECENT BOOKMARK DELETED...\n";
	data.displaylist();
}

char elements::addnotes(char n){
	temperory=(struct element*)malloc(sizeof(struct element));
	temperory->name=n;
	temperory->addrs=NULL;
	if(head==NULL){
		head=temperory;
	}
	else{
		current=head;
		while(current->addrs!=NULL){

			current=current->addrs;
		}
		current->addrs=temperory;
	}
}

void elements::displaynotes(){
	if(head==NULL){
		cout<<"\nNO NOTES ADDED...\n";
	}
	else{
		current=head;
		while(current!=NULL){
			cout<<current->name;
			current=current->addrs;
		}
	}
}

void elements::displaylist(){
	int n=1;
	curr=start;
	while(curr!=NULL){
		cout<<endl<<n<<" :\nATOMIC NUMBER : ";
		cout<<curr->data<<"\n";
		curr=curr->addr;
		n++;
	}

}	

void elements::deletenotes(){
	current=head;
	temperory=current;
	while(current->addrs!=NULL){
		temperory=current;
		current=current->addrs;
		free(temperory);
	}
	free(current);
	head=NULL;
	Sleep(500);
	cout<<"\nAll notes deleted...\n";
	Sleep(1000);
}

