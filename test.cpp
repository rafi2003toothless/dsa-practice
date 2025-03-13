#include<bits\stdc++.h>
using namespace std;
void divisor_of_sqrt_o(int n) {
	vector<int> divisor;
	for(int i=1;i*i<=n;i++) {
		if(n%i==0) {
			divisor.push_back(i);
			if(n/i!=i) {
				divisor.push_back(n/i);
			}
		}
	}
	sort(divisor.begin(),divisor.end());
	for(auto d : divisor) cout << d << " ";
}
int main() {
	int n;
	cin >> n;
	divisor_of_sqrt_o(n);

}



 //    Employee e1 = new Employee(10,20,30);
    //  Employee e2 = new Employee(100,200,300);
    //   System.out.println("Gross salary : " +e1.get_gross_salary());
    // System.out.println("Gross salary : " +e2.get_gross_salary());
    //  Shopping sh=new Shopping();
    // sh.total();
//     sh.vat_amount();
//     sh.total_payabile_after_vat();
        
        
      //  Area c = new Area();
      // Scanner s = new Scanner(System.in);
       
       // double radius = s.nextDouble();
       // c.set_radius(radius);
       // c.calculate_area_of_circle();
        
       // Area t = new Area();
       // double height = s.nextDouble();
       // double base = s.nextDouble();
        
       // t.set_base(base);
       // t.set_height(height);
       // t.calculate_area_of_triangle();
       // Student st=new Student();
       //st.total();
       //st.avarage();
      // Temperature Conversion tc=new Temperature Conversion();
      // Scanner s=new Scanner(System.in);
       //double celsius=s.nextDouble();
       //tc.calculator()


