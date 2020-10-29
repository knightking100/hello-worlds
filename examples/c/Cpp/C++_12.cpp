#include<cstdio>

template<typename _Tp,_Tp val>
struct integral_constant
{
	static const _Tp value=val;

	typedef _Tp value_type;
	typedef integral_constant<_Tp,val> type;

	static const _Tp &get_value(){return value;}
};

template<int val>
struct int_constant:integral_constant<int,val>
{
};

const int P=998244353;

template<typename _Tp,typename _Up>
struct mult_type:int_constant<int((long long)_Tp::value*_Up::value%P)>
{
};

template<typename _Tp,typename _Up>
struct power_type:mult_type<
						mult_type<
								power_type<_Tp,int_constant<_Up::value/2> >,
								power_type<_Tp,int_constant<_Up::value/2> >
								>,
						power_type<_Tp,int_constant<_Up::value%2> >
					>
{};

template<typename _Tp>
struct power_type<_Tp,int_constant<1> >:_Tp
{};

template<typename _Tp>
struct power_type<_Tp,int_constant<0> >:int_constant<1>
{};

const char ans[14]=
{
	power_type<int_constant<429799652>,int_constant<P-2> >::value,
	power_type<int_constant<889524671>,int_constant<P-2> >::value,
	power_type<int_constant<619281219>,int_constant<P-2> >::value,
	power_type<int_constant<619281219>,int_constant<P-2> >::value,
	power_type<int_constant<413686849>,int_constant<P-2> >::value,
	power_type<int_constant<68062115>,int_constant<P-2> >::value,
	power_type<int_constant<967049217>,int_constant<P-2> >::value,
	power_type<int_constant<989855745>,int_constant<P-2> >::value,
	power_type<int_constant<413686849>,int_constant<P-2> >::value,
	power_type<int_constant<849383353>,int_constant<P-2> >::value,
	power_type<int_constant<619281219>,int_constant<P-2> >::value,
	power_type<int_constant<828542813>,int_constant<P-2> >::value,
	power_type<int_constant<756245722>,int_constant<P-2> >::value,
	0
};





int main()
{
	puts(ans);
}