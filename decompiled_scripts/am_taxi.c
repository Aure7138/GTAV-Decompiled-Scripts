#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<194> Local_68 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	struct<44> Local_263[32];
	int iLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1683[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1692[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	float fLocal_1706 = 0f;
	int iLocal_1707 = 0;
	bool bLocal_1708 = 0;
	var uLocal_1709 = 0;
	int iLocal_1710 = 0;
	int iLocal_1711 = 0;
	int iLocal_1712 = 0;
	int iLocal_1713 = 0;
	var uLocal_1714 = 0;
	float fLocal_1715 = 0f;
	float fLocal_1716 = 0f;
	float fLocal_1717 = 0f;
	float fLocal_1718 = 0f;
	float fLocal_1719 = 0f;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	struct<3> Local_1722[50];
	bool bLocal_1873 = 0;
	int iLocal_1874 = 0;
	bool bLocal_1875 = 0;
	int iLocal_1876 = 0;
	int iLocal_1877 = 0;
	int iLocal_1878 = 0;
	int iLocal_1879 = 0;
	bool bLocal_1880 = 0;
	int iLocal_1881 = 0;
	float fLocal_1882 = 0f;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	float fLocal_1885 = 0f;
	struct<3> Local_1886 = { 0, 0, 0 } ;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 12;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 1065353216;
	struct<9> Local_2590 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2599 = 0;
	int iLocal_2600 = 0;
	var uLocal_2601 = 0;
	int iLocal_2602 = 0;
	char* sLocal_2603 = NULL;
	int iLocal_2604 = 0;
	struct<3> Local_2605 = { 0, 0, 0 } ;
	struct<3> Local_2608 = { 0, 0, 0 } ;
	struct<3> Local_2611 = { 0, 0, 0 } ;
	float fLocal_2614 = 0f;
	struct<3> Local_2615 = { 0, 0, 0 } ;
	bool bLocal_2618 = 0;
	bool bLocal_2619 = 0;
	float fLocal_2620 = 0f;
	int iLocal_2621 = 0;
	var uLocal_2622 = 16;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	int iLocal_2787 = 0;
	int iLocal_2788 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_66 = unk_0x7B826893B2E27385();
	iLocal_67 = unk_0x19F6152D9806BBF8();
	iLocal_1713 = joaat("prop_taxi_meter_2");
	fLocal_1715 = 1f;
	fLocal_1716 = (0.4f * fLocal_1715);
	fLocal_1717 = (0.6f * fLocal_1715);
	fLocal_1718 = 0.201f;
	fLocal_1719 = 0.351f;
	iLocal_1720 = 1076369579;
	iLocal_1721 = 1076631591;
	iLocal_1878 = 1;
	iLocal_1880 = iLocal_1879;
	fLocal_1882 = 1.2f;
	fLocal_1885 = unk_0xBBDA792448DB5A89(iLocal_1879);
	iLocal_2602 = 1;
	sLocal_2603 = unk_0x2018949B2C9FD96A(0, 218, 1);
	iLocal_2604 = unk_0xE2F2D76A4AA269FF();
	Local_2605 = { -0.01f, 0.6f, 0.24f };
	Local_2608 = { -5f, 0f, 0f };
	Local_2611 = { 0f, -0.25f, 0.55f };
	fLocal_2614 = 50f;
	Local_2615 = { -0.3f, 1f, 0.35f };
	fLocal_2620 = 99999f;
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_366(ScriptParam_0))
		{
			func_364();
		}
	}
	while (true)
	{
		func_363();
		if (func_355())
		{
			func_364();
		}
		iLocal_1672 = unk_0xF1354995C6159A78();
		if (unk_0x0843570206F71F38())
		{
			if (func_354())
			{
				if (unk_0x5C5CE5291FB79534() != unk_0xC9AA2D3128922353(unk_0x9E2D6C50374FCFA9()))
				{
					func_364();
				}
			}
			else
			{
				func_364();
			}
		}
		else if (unk_0x5C5CE5291FB79534() != -1)
		{
			func_364();
		}
		switch (func_353(iLocal_1672))
		{
			case 0:
				Local_263[iLocal_1672 /*44*/] = 1;
				if (func_352() == 4)
				{
					Local_263[iLocal_1672 /*44*/] = 3;
				}
				break;
			
			case 1:
				if (func_352() == 1)
				{
					func_326();
					func_38();
				}
				else if (func_352() == 4)
				{
					Local_263[iLocal_1672 /*44*/] = 3;
				}
				break;
			
			case 3:
				func_36(&(Local_68.f_193));
				if (func_35(&(Local_68.f_193)))
				{
					Local_263[iLocal_1672 /*44*/] = 4;
				}
				break;
			
			case 2:
				Local_263[iLocal_1672 /*44*/] = 4;
			
			case 4:
				func_364();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_352())
			{
				case 0:
					Local_68.f_0 = 1;
					break;
				
				case 1:
					func_4();
					func_3();
					if (func_1())
					{
						Local_68.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	return 0;
}

void func_3()
{
	switch (Local_68.f_191)
	{
		case 0:
			Local_68.f_191 = 1;
			break;
		
		case 1:
			break;
		
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_4()
{
	if (iLocal_2787 < unk_0x5D79167FED95F0B0())
	{
		func_27();
		iLocal_2787++;
	}
	else
	{
		func_5();
		unk_0xCED9E32812D6C7C7(&(Local_68.f_2[iLocal_2788 /*23*/].f_6), false);
		unk_0xCED9E32812D6C7C7(&(Local_68.f_2[iLocal_2788 /*23*/].f_6), 2);
		Local_68.f_188 = 0;
		iLocal_2788++;
		if (iLocal_2788 >= 8)
		{
			iLocal_2787 = 0;
			iLocal_2788 = 0;
		}
	}
}

void func_5()
{
	bool bVar0;
	
	bVar0 = iLocal_2788;
	func_18(bVar0);
	func_6(bVar0);
}

void func_6(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	if (Local_68.f_2[bParam0 /*23*/].f_7 != 11 && !BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 4))
	{
		if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 0))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
		else if (func_15(Local_68.f_2[bParam0 /*23*/].f_1) || !func_13(Local_68.f_2[bParam0 /*23*/]))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
		else if (!unk_0xF6F5D18EF8EAB859(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0))
		{
			func_17(bParam0, 11);
			func_16(bParam0, 0);
		}
	}
	if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1) && func_13(Local_68.f_2[bParam0 /*23*/]))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1) };
		switch (Local_68.f_2[bParam0 /*23*/].f_7)
		{
			case 0:
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 1:
				if (Local_68.f_2[bParam0 /*23*/].f_2 != -1)
				{
					if (func_12(Var0, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 45f))
					{
						if (!func_11(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							func_17(bParam0, 2);
						}
					}
					else if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)))
					{
						if (func_10(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)), 1, 1))
						{
							if (func_12(Var0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2))), 1), 5f))
							{
								func_17(bParam0, 2);
							}
						}
					}
				}
				else
				{
					func_17(bParam0, 8);
				}
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 2:
				if (Local_68.f_2[bParam0 /*23*/].f_2 != -1)
				{
					if (BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
					{
						if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_park"), 1))
						{
							if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_drive_to_coord"), 1))
							{
								if (unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
								{
									func_17(bParam0, 3);
								}
							}
						}
						else if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)))
						{
							if (func_10(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)), 1, 1))
							{
								if (func_12(Var0, unk_0x6B62510F212526DC(unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2))), 1), 5f))
								{
									if (unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) || unk_0x7F25DB35334461E0(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
									{
										func_17(bParam0, 3);
									}
									else if (!func_12(Var0, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 10f))
									{
										func_17(bParam0, 3);
									}
								}
							}
						}
					}
				}
				else
				{
					func_17(bParam0, 8);
				}
				if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 2))
				{
					func_17(bParam0, 8);
				}
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 3:
				if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 2))
				{
					func_17(bParam0, 8);
				}
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
				{
					func_17(bParam0, 4);
				}
				break;
			
			case 4:
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) <= 0)
				{
					func_17(bParam0, 8);
				}
				else if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_68.f_2[bParam0 /*23*/].f_8, 0f, 0f, 0f, 0))
					{
						func_17(bParam0, 5);
					}
				}
				break;
			
			case 5:
				if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
				{
					if (!func_11(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
					{
						if (func_8(bParam0))
						{
							if (unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) || unk_0x207D53F9E0190691(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) < 2f)
							{
								func_17(bParam0, 6);
							}
						}
					}
				}
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) <= 0)
				{
					func_17(bParam0, 8);
				}
				break;
			
			case 6:
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) <= 0)
				{
					func_17(bParam0, 8);
				}
				else
				{
					func_7(bParam0, 1);
				}
				break;
			
			case 7:
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) <= 0)
				{
					func_17(bParam0, 8);
				}
				break;
			
			case 8:
				func_16(bParam0, 0);
				if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
				{
					unk_0xB0550BC91B0159D6(&(Local_68.f_2[bParam0 /*23*/].f_6), 3);
					if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
					{
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
					}
					func_17(bParam0, 4);
				}
				break;
			
			case 9:
			case 10:
				func_7(bParam0, 0);
				break;
			
			case 11:
				func_16(bParam0, 0);
				break;
			}
	}
	if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/]) && !unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/].f_1))
	{
		if ((BitTest(Local_68.f_190, bParam0) && !BitTest(Local_68.f_190, bParam0 + 8)) && Local_68.f_2[bParam0 /*23*/].f_2 == -1)
		{
			if (Local_68.f_189 > 0)
			{
				Local_68.f_189 = (Local_68.f_189 - 1);
				unk_0xB0550BC91B0159D6(&(Local_68.f_190), bParam0);
				unk_0xCED9E32812D6C7C7(&(Local_68.f_190), bParam0 + 8);
			}
		}
		if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
		{
			Local_68.f_2[bParam0 /*23*/].f_3 = -1;
		}
		if (Local_68.f_2[bParam0 /*23*/].f_4 != -1)
		{
			Local_68.f_2[bParam0 /*23*/].f_4 = -1;
		}
	}
}

void func_7(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1) && func_13(Local_68.f_2[bParam0 /*23*/]))
	{
		if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1))
		{
			if (unk_0x5EB186DF27FFCF1A(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 1) > 0)
			{
				if (unk_0xAB793EA186AB8DAA(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), -1, 0) == unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1))
				{
					iVar0 = unk_0xADD893BD545BE5FC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]));
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 != -1)
						{
							iVar2 = unk_0xAB793EA186AB8DAA(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), iVar1, 0);
							if (unk_0xE5965CDF24F93A9F(iVar2))
							{
								if (!unk_0xF68107C40359970C(iVar2))
								{
									if (!func_9(iVar2, joaat("script_task_leave_any_vehicle"), 1) && !func_9(iVar2, joaat("script_task_leave_vehicle"), 1))
									{
										if (bParam1)
										{
											unk_0xAB7639D658BBCCEE(iVar2, 0, 0);
										}
										else
										{
											unk_0xAB7639D658BBCCEE(iVar2, 0, 64);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

int func_8(bool bParam0)
{
	if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
	{
		if (unk_0x8F41785F110B0DA0(unk_0xF2D8DACFAEBD9629(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, 45f, 45f, 20f, 0, 1, 0) || BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2, 20))
		{
			unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 20);
			if (unk_0x174CED88B97C78D9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_perform_sequence")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x174CED88B97C78D9(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_11(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_12(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

int func_13(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_14(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_15(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

void func_16(bool bParam0, int iParam1)
{
	if ((Local_68.f_2[bParam0 /*23*/].f_2 != -1 || !func_11(Local_68.f_2[bParam0 /*23*/].f_8, 0f, 0f, 0f, 0)) || iParam1)
	{
		if (Local_68.f_2[bParam0 /*23*/].f_2 != -1)
		{
			unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_1), false);
			unk_0xB0550BC91B0159D6(&(Local_68.f_192), Local_68.f_2[bParam0 /*23*/].f_2);
			Local_68.f_2[bParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
		Local_68.f_2[bParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_68.f_2[bParam0 /*23*/].f_11 = 0f;
		Local_68.f_2[bParam0 /*23*/].f_22 = 0;
		Local_68.f_2[bParam0 /*23*/].f_19 = 0;
		unk_0xB0550BC91B0159D6(&(Local_68.f_2[bParam0 /*23*/].f_6), 3);
		iLocal_1692[bParam0] = 0;
	}
}

void func_17(bool bParam0, int iParam1)
{
	Local_68.f_2[bParam0 /*23*/].f_7 = iParam1;
}

void func_18(bool bParam0)
{
	if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/]))
	{
		if (Local_68.f_2[bParam0 /*23*/].f_2 != -1)
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)))
			{
				if (!func_26(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!unk_0x488E34A772939B4C(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_21, 3f, 3f, 3f, 0))
					{
						if (func_19(bParam0, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_21, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_24, 0))
						{
							func_17(bParam0, 1);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_68.f_2[bParam0 /*23*/]))
	{
		Local_68.f_188++;
	}
	if (Local_68.f_2[bParam0 /*23*/].f_2 != -1)
	{
		if (!unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_2)))
		{
			unk_0xB0550BC91B0159D6(&(Local_68.f_192), Local_68.f_2[bParam0 /*23*/].f_2);
			Local_68.f_2[bParam0 /*23*/].f_2 = -1;
			Local_68.f_187 = (Local_68.f_187 - 1);
		}
	}
	if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
	{
		if (!unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)))
		{
			Local_68.f_2[bParam0 /*23*/].f_3 = -1;
		}
	}
}

int func_19(int iParam0, struct<3> Param1, var uParam4, bool bParam5)
{
	if (func_25(Global_2815059.f_837) && func_25(Global_2815059.f_838))
	{
		if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_68.f_2[iParam0 /*23*/]), Global_2815059.f_837, Param1, uParam4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				if (bParam5)
				{
					unk_0xBBF86885619695CE(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), uParam4);
					unk_0xC64B6E13A6A7F517(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), unk_0xCACAD935C0BEE14F(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 2f, 0f, 0f), 1, 0, 0, 1);
				}
				unk_0x9F65B3BAFA302A65(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 1084227584);
				unk_0x84934728F6567814(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 1);
				unk_0x2EABFF5EFCB7E6CF(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 0, 0);
				unk_0x11647D34B93A72EB(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 1);
				unk_0xBEA5F528349F8F75(Local_68.f_2[iParam0 /*23*/], 1);
			}
		}
		if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_68.f_2[iParam0 /*23*/].f_1), Local_68.f_2[iParam0 /*23*/], 25, Global_2815059.f_838, -1, 1, 1, 1))
			{
				unk_0xB2D5451CC5606248(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 5f);
				unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 1);
				unk_0xF1A23B343DFEDFD0(Global_2815059.f_837);
				unk_0xF1A23B343DFEDFD0(Global_2815059.f_838);
				unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 0);
				unk_0x5D1D64E01B76705C(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 1);
				unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 29, 1);
				unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 251, 1);
				unk_0x027BDA95C9BD0667(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 0);
				unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 5, 0);
				unk_0xBC12D08EE7559CCD(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 17, 1);
				unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), 512, 0);
				unk_0xF160248D9083ED0C(unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_164)), 0);
				func_20(&uLocal_2622, 8, unk_0x8AF984152F749D80(Local_68.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0, 1);
				unk_0xBEA5F528349F8F75(Local_68.f_2[iParam0 /*23*/].f_1, 1);
			}
		}
	}
	if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[iParam0 /*23*/]) || !unk_0xCCDCD6672DAE6835(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		return 0;
	}
	unk_0xB0550BC91B0159D6(&(Local_68.f_2[iParam0 /*23*/].f_6), 4);
	return 1;
}

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

int func_21(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam15)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam10);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam8)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam9);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam12)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_23(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_24(unk_0x9E2D6C50374FCFA9(), Param0, iParam4) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = uParam3;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_24(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_25(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_26(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	bVar0 = iLocal_2787;
	if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(bVar0)))
	{
		iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(bVar0));
		uVar2 = unk_0x407E03586628E458(iVar1);
		if (!func_10(iVar1, 1, 1))
		{
			bVar3 = false;
			while (bVar3 < 8)
			{
				if (Local_68.f_2[bVar3 /*23*/].f_2 == bVar0)
				{
					func_16(bVar3, 0);
				}
				if (Local_68.f_2[bVar3 /*23*/].f_3 == bVar0)
				{
					func_34(bVar3);
					Local_68.f_2[bVar3 /*23*/].f_3 = -1;
					if (func_33(&uLocal_1704))
					{
						func_32(&uLocal_1704);
					}
				}
				bVar3++;
			}
		}
		else
		{
			if (!BitTest(Local_68.f_192, bVar0) && BitTest(Local_263[bVar0 /*44*/].f_1, 0))
			{
				if (func_31())
				{
					func_30(bVar0);
					unk_0xCED9E32812D6C7C7(&(Local_68.f_192), bVar0);
				}
				else
				{
					unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_1), false);
				}
			}
			bVar3 = false;
			while (bVar3 < 8)
			{
				if (BitTest(Local_263[bVar0 /*44*/].f_4.f_2, 18))
				{
					if (Local_68.f_2[bVar3 /*23*/].f_2 != -1)
					{
						func_16(bVar3, 0);
					}
					unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 18);
				}
				if (BitTest(Local_263[bVar0 /*44*/].f_4.f_3, bVar3))
				{
					if (Local_68.f_2[bVar3 /*23*/].f_7 != 11)
					{
						if (Local_68.f_2[bVar3 /*23*/].f_7 != 9)
						{
							if (Local_68.f_2[bVar3 /*23*/].f_7 != 10)
							{
								Local_68.f_2[bVar3 /*23*/].f_4 = bVar0;
								func_17(bVar3, 9);
								func_16(bVar3, 1);
							}
						}
					}
				}
				if (!func_15(Local_68.f_2[bVar3 /*23*/].f_1) && func_13(Local_68.f_2[bVar3 /*23*/]))
				{
					if (Local_68.f_2[bVar3 /*23*/].f_3 == -1)
					{
						if (Local_263[bVar0 /*44*/].f_4.f_1 == bVar3 && Local_68.f_2[bVar3 /*23*/].f_7 == 8)
						{
							func_17(bVar3, 3);
							if (Local_68.f_2[bVar3 /*23*/].f_2 == -1)
							{
								Local_68.f_2[bVar3 /*23*/].f_2 = bVar0;
							}
							Local_263[bVar0 /*44*/].f_4.f_1 = -1;
						}
						if (BitTest(Local_263[bVar0 /*44*/].f_3, (0 + bVar3)))
						{
							if ((Local_68.f_2[bVar3 /*23*/].f_7 == 8 || Local_68.f_2[bVar3 /*23*/].f_7 == 1) || Local_68.f_2[bVar3 /*23*/].f_7 == 2)
							{
								func_17(bVar3, 3);
							}
						}
						if ((((func_29(iVar1, unk_0xA5677134B9672173(Local_68.f_2[bVar3 /*23*/])) && Local_68.f_2[bVar3 /*23*/].f_7 != 6) && Local_68.f_2[bVar3 /*23*/].f_7 != 9) && Local_68.f_2[bVar3 /*23*/].f_7 != 10) && Local_68.f_2[bVar3 /*23*/].f_7 != 11)
						{
							unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), false);
							unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
							if (Local_68.f_2[bVar3 /*23*/].f_2 != -1)
							{
								unk_0xB0550BC91B0159D6(&(Local_68.f_192), Local_68.f_2[bVar3 /*23*/].f_2);
								Local_68.f_2[bVar3 /*23*/].f_2 = -1;
								Local_68.f_187 = (Local_68.f_187 - 1);
							}
							Local_68.f_2[bVar3 /*23*/].f_3 = bVar0;
						}
						else if (unk_0x77A43AFA9AAEC041(uVar2, unk_0xA5677134B9672173(Local_68.f_2[bVar3 /*23*/]), 120f, 120f, 120f, 0, 1, 0))
						{
							if (Local_68.f_2[bVar3 /*23*/].f_2 == -1)
							{
								unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
							}
							else if (Local_68.f_2[bVar3 /*23*/].f_2 == bVar0)
							{
								unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
							}
							unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), false);
						}
						else if (unk_0x77A43AFA9AAEC041(uVar2, unk_0xA5677134B9672173(Local_68.f_2[bVar3 /*23*/]), 300f, 300f, 300f, 0, 1, 0))
						{
							unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), false);
						}
						if (unk_0xC378B7F0D175A5B0(iVar1) > 0)
						{
							if (Local_68.f_2[bVar3 /*23*/].f_2 == bVar0)
							{
								unk_0xCED9E32812D6C7C7(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
							}
						}
					}
					else if (Local_68.f_2[bVar3 /*23*/].f_3 == bVar0)
					{
						if (!func_29(iVar1, unk_0xA5677134B9672173(Local_68.f_2[bVar3 /*23*/])))
						{
							func_16(bVar3, 1);
							Local_68.f_2[bVar3 /*23*/].f_3 = -1;
						}
						else
						{
							if (Local_68.f_2[bVar3 /*23*/].f_7 == 5 || Local_68.f_2[bVar3 /*23*/].f_7 == 7)
							{
								if (!BitTest(Local_68.f_2[bVar3 /*23*/].f_6, 3) && BitTest(Local_263[bVar0 /*44*/].f_4.f_2, 3))
								{
									unk_0xCED9E32812D6C7C7(&(Local_68.f_2[bVar3 /*23*/].f_6), 3);
									unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 4);
									unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 5);
									func_17(bVar3, 5);
								}
								else if (BitTest(Local_263[bVar0 /*44*/].f_4.f_2, 4))
								{
									unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 4);
									func_17(bVar3, 7);
								}
								else if (Local_68.f_2[bVar3 /*23*/].f_7 == 7)
								{
									if (BitTest(Local_263[bVar0 /*44*/].f_4.f_2, 5))
									{
										unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 5);
										func_17(bVar3, 5);
									}
								}
							}
							if ((Local_68.f_2[bVar3 /*23*/].f_7 == 5 || Local_68.f_2[bVar3 /*23*/].f_7 == 7) || Local_68.f_2[bVar3 /*23*/].f_7 == 4)
							{
								if (Local_68.f_2[bVar3 /*23*/].f_19 != Local_263[bVar0 /*44*/].f_4.f_15)
								{
									Local_68.f_2[bVar3 /*23*/].f_8 = { Local_263[bVar0 /*44*/].f_4.f_5 };
									Local_68.f_2[bVar3 /*23*/].f_11 = Local_263[bVar0 /*44*/].f_4.f_14;
									Local_68.f_2[bVar3 /*23*/].f_19 = Local_263[bVar0 /*44*/].f_4.f_15;
									func_17(bVar3, 5);
									unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 20);
								}
							}
						}
						unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), false);
						unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
					}
					if (Local_263[bVar0 /*44*/].f_4.f_19 == bVar3 && Local_68.f_2[bVar3 /*23*/].f_22 == 0)
					{
						if (Local_263[bVar0 /*44*/].f_4.f_18 != 0)
						{
							Local_68.f_2[bVar3 /*23*/].f_22 = Local_263[bVar0 /*44*/].f_4.f_18;
							Local_263[iLocal_1672 /*44*/].f_4.f_19 = -1;
							Local_263[bVar0 /*44*/].f_4.f_18 = 0;
						}
					}
					else if (BitTest(Local_263[bVar0 /*44*/].f_4.f_2, 6))
					{
						Local_68.f_2[bVar3 /*23*/].f_22 = 0;
						Local_263[bVar0 /*44*/].f_4.f_19 = -1;
						unk_0xB0550BC91B0159D6(&(Local_263[bVar0 /*44*/].f_4.f_2), 6);
					}
				}
				else if (BitTest(Local_263[bVar0 /*44*/].f_1, 0) || Local_68.f_2[bVar3 /*23*/].f_2 == bVar0)
				{
					unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), false);
					unk_0xB0550BC91B0159D6(&(Local_68.f_2[bVar3 /*23*/].f_6), 2);
				}
				else
				{
					if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bVar3 /*23*/].f_1))
					{
						func_28(&(Local_68.f_2[bVar3 /*23*/].f_1));
					}
					if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bVar3 /*23*/]))
					{
						func_28(&(Local_68.f_2[bVar3 /*23*/]));
					}
					if (Local_68.f_2[bVar3 /*23*/].f_2 == -1)
					{
						func_16(bVar3, 0);
					}
					if (Local_68.f_2[bVar3 /*23*/].f_3 != -1)
					{
						func_16(bVar3, 1);
						Local_68.f_2[bVar3 /*23*/].f_3 = -1;
					}
				}
				bVar3++;
			}
		}
	}
}

void func_28(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam1) + 1;
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x7158135695FAE89D(iParam1, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xAB793EA186AB8DAA(iParam1, (iVar0 - 1), 0);
				if (!unk_0xF68107C40359970C(iVar2))
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						if (unk_0x407E03586628E458(iParam0) == iVar2)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_30(bool bParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 8)
	{
		if (Local_68.f_2[bVar0 /*23*/].f_2 == -1 && !unk_0xCCDCD6672DAE6835(Local_68.f_2[bVar0 /*23*/]))
		{
			Local_68.f_2[bVar0 /*23*/].f_2 = bParam0;
			Local_68.f_187++;
			Local_68.f_189++;
			unk_0xCED9E32812D6C7C7(&(Local_68.f_190), bVar0);
			unk_0xB0550BC91B0159D6(&(Local_68.f_190), bVar0 + 8);
			unk_0xB0550BC91B0159D6(&(Local_263[bParam0 /*44*/].f_1), false);
			unk_0xCED9E32812D6C7C7(&(Local_68.f_2[bVar0 /*23*/].f_6), 4);
			return;
		}
		bVar0++;
	}
}

int func_31()
{
	if (Local_68.f_187 >= 8 || Local_68.f_188 >= 8)
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

void func_34(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Local_263[iLocal_1672 /*44*/].f_4.f_4 = Local_1722[iLocal_1708 /*3*/];
	if (unk_0x12DD4A0B247D9B4D(Local_263[iLocal_1672 /*44*/].f_4.f_4))
	{
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_1722[iVar0 /*3*/] = { Var1 };
		iVar0++;
	}
	iLocal_1707 = 0;
}

int func_35(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x54E30A65F4FA4962())
		{
			func_37(uParam0, 0, 0);
		}
	}
}

void func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

void func_38()
{
	bool bVar0;
	int iVar1;
	
	unk_0xB0550BC91B0159D6(&(Global_2815059.f_836), true);
	if (unk_0x81F82FFBED0CACCA(unk_0x74BD5C0C45A40771()))
	{
		func_325();
		func_324();
	}
	func_303(iLocal_2621);
	func_220();
	func_195(iLocal_2621);
	func_194(iLocal_2621);
	func_192(iLocal_2621);
	if (bLocal_2618 != iLocal_2621)
	{
		func_195(bLocal_2618);
		func_194(bLocal_2618);
		func_192(bLocal_2618);
	}
	iLocal_2621++;
	if (iLocal_2621 == 8)
	{
		fLocal_2620 = 99999f;
		bLocal_2618 = bLocal_2619;
		iLocal_2621 = 0;
	}
	bVar0 = func_10(unk_0x9E2D6C50374FCFA9(), 1, 1);
	func_45(bLocal_2618, bVar0);
	if (bVar0)
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar1 = 0;
			while (iVar1 < 8)
			{
				if (Local_68.f_2[iVar1 /*23*/].f_3 == iLocal_1672)
				{
					func_39(1, 1, 1);
				}
				iVar1++;
			}
			func_39(0, 0, 0);
		}
	}
	else
	{
		if (iLocal_1672 != -1)
		{
			iVar1 = 0;
			while (iVar1 < 8)
			{
				if (Local_68.f_2[iVar1 /*23*/].f_3 == iLocal_1672)
				{
					func_39(1, 1, 1);
				}
				iVar1++;
			}
		}
		func_39(1, 1, 0);
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<3> Var1;
	
	if (((((((Local_263[iLocal_1672 /*44*/].f_4 != -1 || !func_11(Local_263[iLocal_1672 /*44*/].f_4.f_5, 0f, 0f, 0f, 0)) || iLocal_1880 != iLocal_1879) || Local_263[iLocal_1672 /*44*/].f_4.f_18 != 0) || Local_263[iLocal_1672 /*44*/].f_4.f_19 != -1) || BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 10)) || BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 17)) || iParam2)
	{
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 2);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 3);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 4);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 5);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 7);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 10);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 11);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 12);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 13);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 14);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 20);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 21);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 22);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 23);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 24);
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 25);
		Local_263[iLocal_1672 /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_263[iLocal_1672 /*44*/].f_4.f_14 = 0f;
		Local_263[iLocal_1672 /*44*/].f_4.f_15 = 0;
		Local_263[iLocal_1672 /*44*/].f_4 = -1;
		Local_263[iLocal_1672 /*44*/].f_4.f_1 = -1;
		Local_263[iLocal_1672 /*44*/].f_4.f_34 = -1;
		Local_263[iLocal_1672 /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[iLocal_1672 /*44*/].f_4.f_29 = 0f;
		Local_263[iLocal_1672 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
		Local_263[iLocal_1672 /*44*/].f_4.f_33 = 0f;
		Local_263[iLocal_1672 /*44*/].f_4.f_35 = -1;
		Local_263[iLocal_1672 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Local_1722[iVar0 /*3*/] = { Var1 };
			iVar0++;
		}
		iLocal_1708 = 0;
		iLocal_1710 = 0;
		iLocal_1711 = 0;
		bLocal_1875 = false;
		Global_112439 = 0;
		fLocal_1885 = unk_0xBBDA792448DB5A89(iLocal_1879);
		iLocal_1880 = iLocal_1879;
		iLocal_1881 = iLocal_1879;
		func_32(&uLocal_1883);
		fLocal_1882 = fLocal_1882;
		Local_1886 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		Local_263[iLocal_1672 /*44*/].f_4.f_18 = 0;
		Local_263[iLocal_1672 /*44*/].f_4.f_19 = -1;
		func_42(1, -1);
		unk_0xE4FA4FBF0BAFD2A8(1);
		unk_0xAFC1FBF3F6AE7B9A("ODDJOBS@TAXI@DRIVER");
		Local_263[iLocal_1672 /*44*/].f_4.f_4 = 0;
		func_32(&uLocal_1702);
	}
	if (iParam0 == 1)
	{
		Local_263[iLocal_1672 /*44*/].f_4.f_21 = { 0f, 0f, 0f };
		Local_263[iLocal_1672 /*44*/].f_4.f_24 = 0f;
		Local_263[iLocal_1672 /*44*/].f_4.f_26 = { 0f, 0f, 0f };
		Local_263[iLocal_1672 /*44*/].f_4.f_29 = 0f;
	}
	if (BitTest(Global_2815059.f_836, 2))
	{
		unk_0xB0550BC91B0159D6(&(Global_2815059.f_836), 2);
	}
	if (unk_0xBB75DCB31B62483C("taxi"))
	{
		unk_0xEFD883943E59207A("taxi");
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1712))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_1712);
		unk_0xF1A23B343DFEDFD0(iLocal_1713);
	}
	if (unk_0x876B1078E90C91CB(uLocal_2601))
	{
		unk_0xDD786B89B15AA63F(uLocal_2601, 0);
		unk_0x588DDCB644C6486A(uLocal_2601, 0);
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		func_40();
	}
	if (iLocal_2600 == 0)
	{
		iLocal_2600 = 1;
	}
	if (iParam1 == 1 && Local_263[iLocal_1672 /*44*/].f_1 != 0)
	{
		Local_263[iLocal_1672 /*44*/].f_1 = 0;
	}
}

void func_40()
{
	func_41(4, 0, -1);
	unk_0xBD18A1EF31F0166B();
	unk_0x1C35FDD57F36FBEA();
	unk_0xCD6C63A108B12434(0);
	unk_0x842B2A274564CAF5(iLocal_2602);
	unk_0xAA4AFC804C4BA788(0);
}

void func_41(bool bParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1648034.f_1046), iParam0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_1648034.f_1046), bParam0);
			}
			break;
	}
}

void func_42(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_44(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_43(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_43(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_44(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23150.f_6112[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23150.f_6112[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23150.f_6112[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1) && func_13(Local_68.f_2[bParam0 /*23*/]))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0))
			{
				func_184(bParam0);
				func_177(bParam0);
				func_51(bParam0);
			}
			else
			{
				func_46(bParam0);
			}
		}
		else
		{
			func_46(bParam0);
		}
	}
	else
	{
		func_46(bParam0);
	}
}

void func_46(bool bParam0)
{
	if (BitTest(uLocal_1673, (0 + bParam0)))
	{
		unk_0xB0550BC91B0159D6(&uLocal_1673, (0 + bParam0));
		if (func_33(&uLocal_1704))
		{
			func_32(&uLocal_1704);
		}
		if (func_50("TXM_H02"))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (BitTest(Local_263[iLocal_1672 /*44*/].f_3, (0 + bParam0)))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			iLocal_1876 = 0;
		}
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_3), (0 + bParam0));
	}
	func_48(&(uLocal_1683[bParam0]));
	if (Local_263[iLocal_1672 /*44*/].f_4 == bParam0)
	{
		func_39(1, 1, 0);
	}
	func_47(bParam0);
}

void func_47(int iParam0)
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_1674[iParam0]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_1674[iParam0]));
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 12);
	}
}

void func_48(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_51(bool bParam0)
{
	if (((unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0) && !unk_0x706E4529F37489DB(unk_0xE2D3D51028F0428A())) && !unk_0x177106D5E97D1958(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1))) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_3, bParam0))
	{
		unk_0x8FB472886552D737("ODDJOBS@TAXI@DRIVER");
		if (func_176(bParam0) && unk_0x6F940C2636C076AD("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_68.f_2[bParam0 /*23*/].f_7 == 6)
			{
				if (unk_0x876B1078E90C91CB(uLocal_2601))
				{
					unk_0xDD786B89B15AA63F(uLocal_2601, 0);
					unk_0x588DDCB644C6486A(uLocal_2601, 0);
					unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
					func_40();
				}
				if (unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
				{
					func_154(bParam0);
				}
			}
			else
			{
				if ((unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0 || Local_68.f_2[bParam0 /*23*/].f_7 == 9) || Local_68.f_2[bParam0 /*23*/].f_7 == 10)
				{
					func_7(bParam0, 0);
				}
				func_88(bParam0);
			}
			if (Local_263[iLocal_1672 /*44*/].f_4 != bParam0)
			{
				Local_263[iLocal_1672 /*44*/].f_4 = bParam0;
				unk_0xCED9E32812D6C7C7(&(Global_2815059.f_836), 2);
			}
			func_82(bParam0);
			func_81(bParam0);
		}
		func_57(bParam0);
		unk_0x7BC5E5A5FF7F278F(0);
		unk_0x7BC5E5A5FF7F278F(1);
		unk_0x7BC5E5A5FF7F278F(2);
		func_56();
		func_55();
		unk_0xBC12D08EE7559CCD(unk_0xE2D3D51028F0428A(), 2, 0);
		unk_0x7653D561C9574763(0, 99, 1);
		unk_0x7653D561C9574763(0, 100, 1);
		unk_0x7653D561C9574763(0, 25, 1);
		unk_0x7653D561C9574763(0, 73, 1);
		unk_0x7653D561C9574763(0, 200, 1);
		func_54();
		if (Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 376, 1);
		}
		if (func_53() || func_52(0))
		{
			unk_0x7653D561C9574763(0, 75, 1);
		}
	}
	else if (Local_263[iLocal_1672 /*44*/].f_4 == bParam0)
	{
		if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				if ((Local_68.f_2[bParam0 /*23*/].f_7 != 9 && Local_68.f_2[bParam0 /*23*/].f_7 != 10) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_3, bParam0))
				{
					func_154(bParam0);
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bParam0);
			}
		}
		func_39(1, 1, 0);
		func_34(bParam0);
		if (func_33(&uLocal_1704))
		{
			func_32(&uLocal_1704);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()
{
	return Global_75485;
}

void func_54()
{
	Global_2826521.f_258 = 1;
}

void func_55()
{
	Global_2815059.f_4599 = 0;
}

void func_56()
{
	unk_0xCED9E32812D6C7C7(&Global_8137, 4);
}

void func_57(bool bParam0)
{
	char* sVar0;
	
	if (func_71())
	{
		if (unk_0x0347CCBD719C8ADC(uLocal_1889))
		{
			if (Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
			{
				sVar0 = unk_0x2018949B2C9FD96A(2, 218, 1);
				if (!unk_0x3C57C2F07FEE34D2(sLocal_2603, sVar0))
				{
					sLocal_2603 = sVar0;
					iLocal_2599 = 1;
				}
			}
			if (iLocal_2599 == 1)
			{
				Local_2590 = { func_70() };
				func_68(&uLocal_1890);
				func_67(0, 75, "TXM_EXIT", &uLocal_1890, 0, 363);
				if (Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
				{
					if (Local_68.f_2[bParam0 /*23*/].f_7 != 6)
					{
						if (Global_112439 == 1 || bLocal_1875 == 1)
						{
							if (iLocal_1707 > 1)
							{
								func_67(2, 218, "TXM_CDES", &uLocal_1890, 0, 363);
							}
						}
						if (!bLocal_1875)
						{
							if (Local_263[iLocal_1672 /*44*/].f_4.f_15 != Local_1722[iLocal_1708 /*3*/])
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1890, 0, 363);
							}
						}
						else if (Local_68.f_2[bParam0 /*23*/].f_7 == 5)
						{
							if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 4))
							{
								func_67(0, 177, "TXM_STOP", &uLocal_1890, 0, 363);
							}
							if (bLocal_1873)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1890, 0, 363);
							}
							if (!BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 3) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 3))
							{
								if (Local_68.f_2[bParam0 /*23*/].f_7 == 5)
								{
									func_67(0, 179, "TXM_HURY", &uLocal_1890, 0, 363);
								}
							}
						}
						else if (Local_68.f_2[bParam0 /*23*/].f_7 == 7)
						{
							if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 5))
							{
								func_67(0, 177, "TXM_STRT", &uLocal_1890, 0, 363);
							}
							if (bLocal_1873)
							{
								func_67(0, 176, "TXM_SLCT", &uLocal_1890, 0, 363);
							}
						}
						if (unk_0x3A76A0944BE2C291(2))
						{
							func_67(2, 199, "SPEC_PAUSE", &uLocal_1890, 0, 363);
						}
					}
				}
				iLocal_2599 = 0;
			}
			unk_0xCF0E3BB302EAC0EA(unk_0x56555A9ED8B80DFD());
			unk_0xE53134ABB42F336F(0);
			func_66(1);
			func_65(1);
			func_58(&uLocal_1889, &Local_2590, &uLocal_1890, func_64(&uLocal_1890));
		}
		else
		{
			uLocal_1889 = unk_0x528279F3F1EEF869("instructional_buttons");
		}
	}
	else
	{
		unk_0x705B098546DEB18A(&uLocal_1889);
		iLocal_2599 = 1;
	}
}

void func_58(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0xB1C1E679BD17A4F0(2))
	{
		*uParam2 = 0;
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(0);
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
		}
		func_63(uParam2);
	}
	if (Global_1577896 < 2)
	{
		func_65(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x0347CCBD719C8ADC(*uParam0))
		{
			*uParam0 = unk_0x528279F3F1EEF869("instructional_buttons");
		}
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x966FCEABCB8FA5E7(*uParam0, "CLEAR_ALL");
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_62(unk_0x2018949B2C9FD96A(iVar1, iVar2, 1));
						if (iVar3 < 363)
						{
							func_62(unk_0x2018949B2C9FD96A(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_62(unk_0x19214818F925D149(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0x28594D0D61DB1278(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x76DB21247AE4E4E2(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						func_61(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(bVar0);
					func_62(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xACC32B78196FBC2A(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_62(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0x28594D0D61DB1278(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x2AE954BA77A66307(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x4ADC8B166E139423(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x76DB21247AE4E4E2(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						func_61(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x8FE9914D4872D601())
					{
						unk_0xD7D6BA6E36AEC182(0);
						unk_0x4F47E317C74C543B(363);
					}
					unk_0x6F06CF0E9AB02847();
				}
				bVar0++;
			}
			unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F(uParam2->f_699);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x4F47E317C74C543B(false);
			unk_0x6F06CF0E9AB02847();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_60(*uParam0, uParam1);
	}
	func_59();
}

void func_59()
{
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
}

void func_60(var uParam0, var uParam1)
{
	unk_0xC4353D240DCE9533(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_61(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_62(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

void func_63(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_64(var uParam0)
{
	return uParam0->f_692;
}

void func_65(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_66(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	bVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[bVar0 /*57*/].f_32), sParam2, 16);
	unk_0xCED9E32812D6C7C7(&(uParam3->f_689), bVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[bVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0xCED9E32812D6C7C7(&(uParam3->f_691), bVar0);
		if (iParam5 < 363)
		{
		}
	}
	uParam3->f_693++;
}

void func_68(var uParam0)
{
	func_69(uParam0);
	uParam0->f_692 = 1;
}

void func_69(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_70()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_71()
{
	if (!func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return 0;
	}
	if (!func_76(1, 1))
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		return 0;
	}
	if (func_74(0))
	{
		return 0;
	}
	if (!func_72())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_73() == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	return Global_1574632.f_18;
}

bool func_74(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

bool func_75()
{
	return Global_100493.f_376 > 0;
}

int func_76(int iParam0, int iParam1)
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_80())
		{
			return 0;
		}
	}
	if (func_79())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_52(0))
		{
			return 0;
		}
	}
	if (func_78(8, -1))
	{
		return 0;
	}
	if (unk_0xDFA2E5162727D6D2())
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0x3E6C9DAD84CEFED1())
	{
		return 0;
	}
	if (Global_1574964)
	{
		return 0;
	}
	if (Global_1836363)
	{
		return 0;
	}
	return 1;
}

bool func_77()
{
	return Global_1575058;
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

bool func_79()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_192 != 0;
}

bool func_80()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

void func_81(bool bParam0)
{
	if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 11))
	{
		if (Local_263[iLocal_1672 /*44*/].f_4.f_18 == 0)
		{
			if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
			{
				Local_263[iLocal_1672 /*44*/].f_4.f_18 = 26;
				Local_263[iLocal_1672 /*44*/].f_4.f_19 = bParam0;
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 11);
			}
		}
	}
}

void func_82(bool bParam0)
{
	if (bLocal_1875)
	{
		if (func_87(&uLocal_1883, 10000, 0))
		{
			if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 3) || BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 3))
			{
				fLocal_1885 = (fLocal_1885 + (fLocal_1882 * 1.5f));
			}
			else
			{
				fLocal_1885 = (fLocal_1885 + fLocal_1882);
			}
			func_32(&uLocal_1883);
		}
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Local_1886, 0) > 50f)
		{
			if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 3) || BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 3))
			{
				fLocal_1885 = (fLocal_1885 + (fLocal_1882 * 1.5f));
			}
			else
			{
				fLocal_1885 = (fLocal_1885 + fLocal_1882);
			}
			func_32(&uLocal_1883);
			Local_1886 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		}
		iLocal_1880 = unk_0x11E019C8F43ACC8A(fLocal_1885);
		if (iLocal_1880 > 5000)
		{
			iLocal_1880 = 5000;
		}
		if (iLocal_1880 != iLocal_1881)
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SET_TAXI_PRICE");
			unk_0x4F47E317C74C543B(iLocal_1880);
			unk_0x6F06CF0E9AB02847();
			iLocal_1881 = bLocal_1880;
			func_85("\ntaxiService currentJourneyPrice = ");
			func_83(bLocal_1880);
			func_85("\n");
		}
	}
}

void func_83(int iParam0)
{
	func_84(iParam0);
}

void func_84(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_85(char* sParam0)
{
	func_86(sParam0);
}

void func_86(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, sParam0))
	{
	}
}

int func_87(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_37(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0)
{
	if (Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
	{
		if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/]) && unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/].f_1))
		{
			if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/]) && unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1))
			{
				unk_0xBEA5F528349F8F75(Local_68.f_2[bParam0 /*23*/], 0);
				unk_0xBEA5F528349F8F75(Local_68.f_2[bParam0 /*23*/].f_1, 0);
				if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 10))
				{
					func_146(bParam0);
					func_113(bParam0);
				}
				if (func_112(bParam0))
				{
					func_89(bParam0);
					iLocal_2599 = 1;
				}
			}
			else
			{
				if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/]))
				{
					unk_0xBEA5F528349F8F75(Local_68.f_2[bParam0 /*23*/], 0);
				}
				else if (unk_0xC31EECA11005273C(Local_68.f_2[bParam0 /*23*/]))
				{
				}
				if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1))
				{
					unk_0xBEA5F528349F8F75(Local_68.f_2[bParam0 /*23*/].f_1, 0);
				}
			}
		}
	}
	else
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
		if (unk_0x876B1078E90C91CB(uLocal_2601))
		{
			unk_0xDD786B89B15AA63F(uLocal_2601, 0);
			unk_0x588DDCB644C6486A(uLocal_2601, 0);
			unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
			func_40();
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	
	if (!iLocal_1711)
	{
		iVar0 = func_111();
		iLocal_1710 = iVar0;
		iLocal_1692[bParam0] = 0;
		iLocal_1711 = 1;
	}
	if (func_97(bParam0))
	{
		iVar1 = 0;
		unk_0xEA5DEA46C3EE64D3(uLocal_1714, "CLEAR_TAXI_DISPLAY");
		unk_0x6F06CF0E9AB02847();
		iVar1 = 0;
		while (iVar1 < iLocal_1707)
		{
			if (!unk_0x12DD4A0B247D9B4D(Local_1722[iVar1 /*3*/]))
			{
				iLocal_2600 = 1;
				iLocal_1692[bParam0] = 0;
				return;
			}
			if (func_96(Local_1722[iVar1 /*3*/]) == -1)
			{
				iLocal_2600 = 1;
				iLocal_1692[bParam0] = 0;
				return;
			}
			if (func_95(unk_0x1A3931A61B3223A2(Local_1722[iVar1 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
			{
				iLocal_2600 = 1;
				iLocal_1692[bParam0] = 0;
				return;
			}
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "ADD_TAXI_DESTINATION");
			unk_0x4F47E317C74C543B(iVar1);
			unk_0x4F47E317C74C543B(unk_0xF33CD92713FC4E3A(Local_1722[bVar1 /*3*/]));
			if ((func_96(Local_1722[bVar1 /*3*/]) == 492 || func_96(Local_1722[bVar1 /*3*/]) == 475) && unk_0xE8FCD9A6754A5FB2(Local_1722[bVar1 /*3*/]) == 0)
			{
				func_94(unk_0xCA3605134E97DB2B(Local_1722[bVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x4F47E317C74C543B(iVar2);
				unk_0x4F47E317C74C543B(iVar3);
				unk_0x4F47E317C74C543B(iVar4);
			}
			else
			{
				unk_0x2F046C9381D8E91B(unk_0xE8FCD9A6754A5FB2(Local_1722[bVar1 /*3*/]), &bVar2, &bVar3, &bVar4, &uVar5);
				unk_0x4F47E317C74C543B(bVar2);
				unk_0x4F47E317C74C543B(bVar3);
				unk_0x4F47E317C74C543B(bVar4);
			}
			iVar9 = func_92(Local_1722[bVar1 /*3*/]);
			if (iVar9 == -1)
			{
				unk_0x4ADC8B166E139423("STRING");
				unk_0x26E6A0F02144BED3(Local_1722[bVar1 /*3*/]);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("STRING");
				unk_0x26C23BE14F66F202(func_90(iVar9));
				unk_0xD1D4F8D5470AFA4C();
			}
			if (unk_0x0096542092B7C49B(Local_1722[bVar1 /*3*/]) == 2)
			{
				if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(unk_0xD806A0199657B31F(Local_1722[bVar1 /*3*/]))))
				{
					Var6 = { unk_0x6B62510F212526DC(unk_0x28AA31872A651BC7(unk_0xD806A0199657B31F(Local_1722[bVar1 /*3*/])), 1) };
				}
			}
			else if (unk_0x0096542092B7C49B(Local_1722[bVar1 /*3*/]) == 1)
			{
				if (unk_0x55A0C756C4A8220C(unk_0xD806A0199657B31F(Local_1722[bVar1 /*3*/]), 0))
				{
					Var6 = { unk_0x6B62510F212526DC(unk_0xD806A0199657B31F(Local_1722[bVar1 /*3*/]), 1) };
				}
			}
			else
			{
				Var6 = { unk_0x1A3931A61B3223A2(Local_1722[bVar1 /*3*/]) };
			}
			func_61(unk_0x717DD0ABF4A97737(Var6));
			if (((((((func_96(Local_1722[bVar1 /*3*/]) == 40 || func_96(Local_1722[bVar1 /*3*/]) == 357) || func_96(Local_1722[bVar1 /*3*/]) == 475) || func_96(Local_1722[bVar1 /*3*/]) == 492) || func_96(Local_1722[bVar1 /*3*/]) == 557) || func_96(Local_1722[bVar1 /*3*/]) == 590) || func_96(Local_1722[bVar1 /*3*/]) == 591) || func_96(Local_1722[bVar1 /*3*/]) == 614)
			{
				iVar10 = 0;
				while (iVar10 < 128)
				{
					iVar11 = iVar10;
					if (func_11(Var6, Global_1312193[iVar11 /*1951*/].f_3[0 /*3*/], 0))
					{
						iVar10 = 128;
						unk_0x4ADC8B166E139423("STRTNM1");
						unk_0x26C23BE14F66F202(&(Global_1312193[iVar11 /*1951*/].f_16));
						unk_0xD1D4F8D5470AFA4C();
						func_61("");
					}
					iVar10++;
				}
			}
			else if (Local_1722[bVar1 /*3*/].f_2 == 0)
			{
				if (Local_1722[bVar1 /*3*/].f_1 != 0)
				{
					unk_0x4ADC8B166E139423("STRTNM1");
					unk_0x5CE9B15C197DF898(Local_1722[bVar1 /*3*/].f_1);
					unk_0xD1D4F8D5470AFA4C();
					func_61("");
				}
			}
			else
			{
				unk_0x4ADC8B166E139423("STRTNM2");
				unk_0x5CE9B15C197DF898(Local_1722[bVar1 /*3*/].f_1);
				unk_0x5CE9B15C197DF898(Local_1722[bVar1 /*3*/].f_2);
				unk_0xD1D4F8D5470AFA4C();
			}
			if (((iLocal_2604 == 8 || iLocal_2604 == 9) || iLocal_2604 == 10) || iLocal_2604 == 12)
			{
				unk_0xD7D6BA6E36AEC182(1);
			}
			else
			{
				unk_0xD7D6BA6E36AEC182(0);
			}
			unk_0x6F06CF0E9AB02847();
			if (bLocal_1875)
			{
				if (Local_263[iLocal_1672 /*44*/].f_4.f_15 == Local_1722[bVar1 /*3*/])
				{
					iLocal_1708 = bVar1;
				}
			}
			else if (unk_0x12DD4A0B247D9B4D(Local_263[iLocal_1672 /*44*/].f_4.f_4))
			{
				if (Local_263[iLocal_1672 /*44*/].f_4.f_4 == Local_1722[bVar1 /*3*/])
				{
					iLocal_1708 = bVar1;
				}
			}
			bVar1++;
		}
		if (bLocal_1875)
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SHOW_TAXI_DESTINATION");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "HIGHLIGHT_DESTINATION");
			unk_0x4F47E317C74C543B(iLocal_1708);
			unk_0x6F06CF0E9AB02847();
		}
		else
		{
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SET_TAXI_PRICE");
			unk_0x4F47E317C74C543B(bLocal_1880);
			if (((iLocal_2604 == 8 || iLocal_2604 == 9) || iLocal_2604 == 10) || iLocal_2604 == 12)
			{
				unk_0xD7D6BA6E36AEC182(1);
			}
			else
			{
				unk_0xD7D6BA6E36AEC182(0);
			}
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SHOW_TAXI_DESTINATION");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uLocal_1714, "HIGHLIGHT_DESTINATION");
			unk_0x4F47E317C74C543B(bLocal_1708);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
		{
			Var12 = { unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/]) };
			if ((!func_26(Var12) && unk_0x876B1078E90C91CB(uLocal_2601)) && unk_0xA24FDA4986456697(uLocal_2601))
			{
				unk_0x262D43EBE3CA4397(Var12.f_0, Var12.f_1);
			}
		}
		iLocal_2600 = 0;
		unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 10);
	}
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_91(iParam0, 0, 0);
			break;
		
		case 8:
			return func_91(iParam0, 0, 0);
			break;
		
		case 9:
			return func_91(iParam0, 0, 0);
			break;
		
		case 10:
			return func_91(iParam0, 0, 0);
			break;
		
		case 11:
			return func_91(iParam0, 0, 0);
			break;
		
		case 12:
			return func_91(iParam0, 0, 0);
			break;
		
		case 13:
			return func_91(iParam0, 0, 0);
			break;
		
		case 14:
			return func_91(iParam0, 0, 0);
			break;
		
		case 15:
			return func_91(iParam0, 0, 0);
			break;
		
		case 16:
			return func_91(iParam0, 0, 0);
			break;
		
		case 17:
			return func_91(iParam0, 0, 0);
			break;
		
		case 18:
			return func_91(iParam0, 0, 0);
			break;
		
		case 19:
			return func_91(iParam0, 0, 0);
			break;
		
		case 20:
			return func_91(iParam0, 0, 0);
			break;
		
		case 21:
			return func_91(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_91(iParam0, 0, 0);
			break;
		
		case 40:
			return func_91(iParam0, 0, 0);
			break;
		
		case 41:
			return func_91(iParam0, 0, 0);
			break;
		
		case 42:
			return func_91(iParam0, 0, 0);
			break;
		
		case 43:
			return func_91(iParam0, 0, 0);
			break;
		
		case 44:
			return func_91(iParam0, 0, 0);
			break;
		
		case 45:
			return func_91(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
		
		case 53:
			return "SB_AMU";
			break;
		
		case 54:
			return "SB_TAT";
			break;
		
		case 55:
			return func_91(iParam0, 0, 0);
			break;
		
		case 56:
			return "SB_AMU";
			break;
		
		case 57:
			return func_91(iParam0, 0, 0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_91(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B";
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T";
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA";
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
		
		case 54:
			return "S_T_07";
			break;
		
		case 55:
			return "S_CL_10";
			break;
		
		case 56:
			return "S_G_18";
			break;
		
		case 57:
			return "S_CL_11";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		iVar1 = iVar0;
		iVar2 = func_93(iVar1);
		if (Global_32338[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		case 56:
			return 48;
			break;
		
		case 57:
			return 40;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xF6CF013E72C680B4(iParam0, 24, 31);
	*uParam2 = unk_0xF6CF013E72C680B4(iParam0, 16, 23);
	*uParam3 = unk_0xF6CF013E72C680B4(iParam0, 8, 15);
	*uParam4 = unk_0xF6CF013E72C680B4(iParam0, 0, 7);
}

int func_95(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_96(var uParam0)
{
	var uVar0;
	
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		uVar0 = unk_0xF33CD92713FC4E3A(uParam0);
	}
	return uVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	switch (iLocal_1692[iParam0])
	{
		case 0:
			func_34(iParam0);
			break;
		
		case 1:
			func_98(iParam0, iLocal_66, 0);
			func_98(iParam0, 77, 0);
			func_98(iParam0, 79, 0);
			func_98(iParam0, 293, 0);
			func_98(iParam0, iLocal_67, 0);
			func_98(iParam0, 225, 0);
			func_98(iParam0, 348, 0);
			break;
		
		case 2:
			func_98(iParam0, 110, 1);
			break;
		
		case 3:
			func_98(iParam0, 119, 1);
			func_98(iParam0, 103, 1);
			break;
		
		case 4:
			func_98(iParam0, 122, 1);
			func_98(iParam0, 109, 1);
			break;
		
		case 5:
			func_98(iParam0, 311, 1);
			func_98(iParam0, 90, 1);
			break;
		
		case 6:
			func_98(iParam0, 304, 1);
			break;
		
		case 7:
			func_98(iParam0, 310, 1);
			break;
		
		case 8:
			func_98(iParam0, 309, 1);
			break;
		
		case 9:
			func_98(iParam0, 176, 1);
			break;
		
		case 10:
			func_98(iParam0, 305, 1);
			break;
		
		case 11:
			func_98(iParam0, 84, 1);
			break;
		
		case 12:
			func_98(iParam0, 94, 1);
			break;
		
		case 13:
			func_98(iParam0, 52, 1);
			break;
		
		case 14:
			func_98(iParam0, 135, 1);
			break;
		
		case 15:
			func_98(iParam0, 40, 0);
			func_98(iParam0, 357, 0);
			func_98(iParam0, 475, 0);
			func_98(iParam0, 492, 0);
			func_98(iParam0, 473, 0);
			func_98(iParam0, 496, 0);
			func_98(iParam0, 497, 0);
			func_98(iParam0, 498, 0);
			func_98(iParam0, 499, 0);
			func_98(iParam0, 557, 0);
			func_98(iParam0, 590, 0);
			func_98(iParam0, 591, 0);
			func_98(iParam0, 500, 0);
			func_98(iParam0, 614, 0);
			break;
		
		case 16:
			func_98(iParam0, 121, 1);
			break;
		
		case 17:
			func_98(iParam0, 71, 1);
			break;
		
		case 18:
			func_98(iParam0, 72, 1);
			break;
		
		case 19:
			func_98(iParam0, 446, 1);
			break;
		
		case 20:
			func_98(iParam0, 73, 1);
			break;
		
		case 21:
			func_98(iParam0, 75, 1);
			break;
		
		case 22:
			iLocal_1710 = func_111();
			if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
			{
				iVar0 = 0;
				while (iVar0 < 50)
				{
					if (unk_0x12DD4A0B247D9B4D(Local_1722[iVar0 /*3*/]))
					{
						if (Local_1722[bLocal_1708 /*3*/] == Local_1722[iVar0 /*3*/])
						{
							if (func_11(unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/]), unk_0x1A3931A61B3223A2(Local_1722[iVar0 /*3*/]), 0))
							{
								Var2 = { unk_0x1A3931A61B3223A2(Local_1722[iVar0 /*3*/]) };
								if ((!func_26(Var2) && unk_0x876B1078E90C91CB(uLocal_2601)) && unk_0xA24FDA4986456697(uLocal_2601))
								{
									unk_0x262D43EBE3CA4397(Var2.f_0, Var2.f_1);
								}
								bLocal_1708 = iVar0;
								iVar0 = 50;
								iVar1 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0)
				{
					bLocal_1708 = false;
				}
			}
			else
			{
				bLocal_1708 = false;
			}
			break;
	}
	if (iLocal_1692[iParam0] >= 22)
	{
		return 1;
	}
	else
	{
		iLocal_1692[iParam0]++;
	}
	return 0;
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	bool bVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	uVar4 = unk_0xFD3A7CD556889D1D(iParam1);
	while (unk_0x12DD4A0B247D9B4D(uVar4))
	{
		if (iLocal_1707 < 50)
		{
			if (func_110(uVar4))
			{
				if (func_109(Var0))
				{
					if (!func_108(&uVar4))
					{
						bVar3 = false;
						switch (iParam1)
						{
							case 77:
							case 79:
							case 293:
							case 225:
							case 348:
							case 90:
							case 109:
							case 122:
							case 119:
							case 311:
							case 103:
							case 279:
							case 304:
							case 310:
							case 309:
							case 38:
							case 176:
							case 305:
							case 84:
							case 94:
							case 126:
							case 52:
							case 99:
							case 102:
							case 135:
							case 136:
							case 40:
							case 357:
							case 110:
							case 121:
							case 71:
							case 72:
							case 446:
							case 73:
							case 111:
							case 75:
							case 475:
							case 473:
							case 492:
							case 496:
							case 497:
							case 498:
							case 499:
							case 500:
							case 557:
							case 590:
							case 591:
							case 614:
							case default:
						}
						bVar3 = true;
						Var5 = { unk_0x1A3931A61B3223A2(uVar4) };
						if (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] == 16)
						{
							if (iParam1 == 110)
							{
								if (Var5.f_1 < 200f)
								{
									bVar3 = true;
								}
								else
								{
									bVar3 = false;
								}
							}
						}
						if (iParam1 == iLocal_67)
						{
							bVar3 = true;
						}
						if (func_11(Var5, 0f, 0f, 0f, 0))
						{
							bVar3 = false;
						}
						else if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Var5, 250f, 250f, 250f, 0, 1, 0))
						{
							bVar3 = false;
						}
						else if (iParam1 != iLocal_67)
						{
							iVar8 = 0;
							while (iVar8 < 1)
							{
								if (func_107(Var5, Global_2815059.f_238[iVar8 /*3*/], 200f, 1) && !func_11(Global_2815059.f_238[iVar8 /*3*/], 0f, 0f, 0f, 0))
								{
									bVar3 = false;
								}
								iVar8++;
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_110(uVar4))
							{
								if ((((unk_0x0096542092B7C49B(uVar4) == 4 || unk_0x0096542092B7C49B(uVar4) == 5) || unk_0x0096542092B7C49B(uVar4) == 1) || unk_0x0096542092B7C49B(uVar4) == 6) || unk_0x0096542092B7C49B(uVar4) == 3)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								if (func_110(uVar4))
								{
									func_106(iParam0, &uVar4, &Var0);
									func_99(Var0, bParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		uVar4 = unk_0xA529C1D8769201E5(iParam1);
	}
}

void func_99(struct<3> Param0, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_96(Local_1722[iVar0 /*3*/]) == func_96(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		else if (iVar0 == iLocal_1707)
		{
			iVar1 = iVar0;
			iVar0 = 50;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_1707)
		{
			if (func_96(Local_1722[iVar0 /*3*/]) == func_96(Param0.f_0))
			{
				if (func_103(Param0, Local_1722[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_102(Param0, iVar0, iParam4);
						iVar0 = 50;
						return;
					}
					else
					{
						func_100(Param0, iVar0, iParam4);
						iLocal_1707++;
						iVar0 = 50;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 50;
					return;
				}
				else
				{
					func_100(Param0, iVar0, iParam4);
					iLocal_1707++;
					iVar0 = 50;
					return;
				}
			}
			else
			{
				func_100(Param0, iVar0, iParam4);
				iLocal_1707++;
				iVar0 = 50;
				return;
			}
		}
		else
		{
			func_100(Param0, iVar0, iParam4);
			iLocal_1707++;
			iVar0 = 50;
			return;
		}
		iVar0++;
	}
}

void func_100(struct<3> Param0, int iParam3, int iParam4)
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_101(iParam3);
	Local_1722[iParam3 /*3*/] = { Param0 };
	if (func_96(Local_1722[iParam3 /*3*/]) == unk_0x19F6152D9806BBF8())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x1A3931A61B3223A2(Local_1722[iParam3 /*3*/]) };
		}
	}
}

void func_101(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\n");
	iVar0 = 49;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_1722[(iVar0 - 1) /*3*/] };
		Local_1722[iVar0 /*3*/] = { Var1 };
		iVar0 = (iVar0 - 1);
	}
}

void func_102(struct<3> Param0, int iParam3, int iParam4)
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	Local_1722[iParam3 /*3*/] = { Param0 };
	if (func_96(Local_1722[iParam3 /*3*/]) == unk_0x19F6152D9806BBF8())
	{
		if (Local_68.f_2[iParam4 /*23*/].f_3 != -1)
		{
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_35 = iParam3;
			Local_263[Local_68.f_2[iParam4 /*23*/].f_3 /*44*/].f_4.f_36 = { unk_0x1A3931A61B3223A2(Local_1722[iParam3 /*3*/]) };
		}
	}
}

int func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_104(uParam0) < func_104(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_104(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x12DD4A0B247D9B4D(uParam0))
		{
			Var0 = { func_105(uParam0) - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
	}
	return unk_0x652D2EEEF1D3E62C(Var0);
}

Vector3 func_105(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0x0096542092B7C49B(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0xD806A0199657B31F(uParam0);
		if (unk_0x55A0C756C4A8220C(iVar3, 0))
		{
			Var0 = { unk_0x6B62510F212526DC(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0x28AA31872A651BC7(unk_0xD806A0199657B31F(uParam0));
		if (!unk_0xF68107C40359970C(iVar4))
		{
			Var0 = { unk_0x6B62510F212526DC(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0x1AA24836EA881D77(unk_0xD806A0199657B31F(uParam0));
		if (unk_0xE5965CDF24F93A9F(iVar5))
		{
			Var0 = { unk_0x6B62510F212526DC(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0x1A3931A61B3223A2(uParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0xDA4FD237416E009F(uParam0);
		if (unk_0x2791155FB0769FE5(uVar6))
		{
			Var0 = { unk_0x70453F7DF40780A5(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0x1A3931A61B3223A2(uParam0) };
	}
	return Var0;
}

void func_106(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = *uParam1;
	if (!*uParam2 == Global_112422)
	{
		unk_0x05E7AEFD2137BB91(func_105(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		unk_0x05E7AEFD2137BB91(Local_68.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_107(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	return unk_0x987A5F1E1A67E3C0(Param0, Param3, iParam7) <= fParam6;
}

int func_108(var uParam0)
{
	if (!unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		return 1;
	}
	if (Global_112419 == *uParam0)
	{
		return 1;
	}
	if (unk_0xCA3605134E97DB2B(*uParam0) == 39)
	{
		return 1;
	}
	if (func_11(unk_0x1A3931A61B3223A2(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_96(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (!func_96(uParam0) == iLocal_66)
	{
		fVar0 = func_104(uParam0);
		if (fVar0 > 40f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_110(var uParam0)
{
	int iVar0;
	
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		iVar0 = unk_0x5185D043BD203744(uParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	int iVar0;
	
	iVar0 = unk_0x5A6048C9BD40C5DB();
	if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 12))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_112(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC9D9444186B5A374() > 500)
	{
		iVar4 = unk_0xE2F2D76A4AA269FF();
		if (iLocal_2604 != iVar4)
		{
			if (((iLocal_2604 == 8 || iLocal_2604 == 9) || iLocal_2604 == 10) || iLocal_2604 == 12)
			{
				if (((iVar4 != 8 && iVar4 != 9) && iVar4 != 10) && iVar4 != 12)
				{
					iLocal_2604 = iVar4;
					iLocal_2600 = 1;
					iLocal_1692[bParam0] = 0;
					unk_0x5AE11BC36633DE4E(0);
				}
			}
			else if (((iVar4 == 8 || iVar4 == 9) || iVar4 == 10) || iVar4 == 12)
			{
				iLocal_2604 = iVar4;
				iLocal_2600 = 1;
				iLocal_1692[bParam0] = 0;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2600)
		{
			iVar5 = func_111();
			if (iLocal_1710 != iVar5)
			{
				iLocal_2600 = 1;
				iLocal_1692[bParam0] = 0;
				iLocal_1710 = iVar5;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (!iLocal_2600)
		{
			if (Local_68.f_2[bParam0 /*23*/].f_3 != -1)
			{
				if (Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 == -1)
				{
					uVar3 = unk_0xFD3A7CD556889D1D(unk_0x19F6152D9806BBF8());
					if (unk_0x12DD4A0B247D9B4D(uVar3))
					{
						Var0 = { unk_0x1A3931A61B3223A2(uVar3) };
						if (unk_0x2A488C176D52CCA5(Var0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 250f)
						{
							iLocal_2600 = 1;
							iLocal_1692[bParam0] = 0;
							Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(Local_1722[Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]))
				{
					if (func_96(Local_1722[Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) == unk_0x19F6152D9806BBF8())
					{
						Var0 = { unk_0x1A3931A61B3223A2(Local_1722[Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 /*3*/]) };
						if (!func_11(Var0, Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_36, 0))
						{
							iLocal_2600 = 1;
							iLocal_1692[bParam0] = 0;
							Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
							Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					else
					{
						iLocal_2600 = 1;
						iLocal_1692[bParam0] = 0;
						Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
						Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
						unk_0x5AE11BC36633DE4E(0);
					}
				}
				else
				{
					iLocal_2600 = 1;
					iLocal_1692[bParam0] = 0;
					Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_35 = -1;
					Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_36 = { 0f, 0f, 0f };
					unk_0x5AE11BC36633DE4E(0);
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
	}
	return iLocal_2600;
}

void func_113(bool bParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_71())
	{
		if (iLocal_2600 == 0)
		{
			func_145(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x3A76A0944BE2C291(2))
			{
				unk_0x07899AAA5D680386(2, 241);
				unk_0x07899AAA5D680386(2, 242);
				unk_0x07899AAA5D680386(2, 180);
				unk_0x07899AAA5D680386(2, 181);
			}
			if (iVar0 > 28 || unk_0xF01464D7AF0B7347(2, 180))
			{
				if (!iLocal_1876)
				{
					func_143();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1876 = 1;
				}
			}
			else
			{
				iLocal_1876 = 0;
			}
			if (iVar0 < -28 || unk_0xF09A4F413B0D30EB(2, 181))
			{
				if (!iLocal_1877)
				{
					func_141();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1877 = 1;
				}
			}
			else
			{
				iLocal_1877 = 0;
			}
		}
		if (!bLocal_1875)
		{
			if (iLocal_1707 > 0)
			{
				unk_0xE4FA4FBF0BAFD2A8(1);
				if (iLocal_2600 == 0)
				{
					if (unk_0xF09A4F413B0D30EB(0, 176))
					{
						if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
						{
							if (func_140(unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/])))
							{
								iLocal_1878 = 0;
								Local_263[iLocal_1672 /*44*/].f_4.f_15 = { Local_1722[bLocal_1708 /*3*/] };
								Local_263[iLocal_1672 /*44*/].f_4.f_5 = { unk_0x1A3931A61B3223A2(Local_263[iLocal_1672 /*44*/].f_4.f_15) };
								Local_1886 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
								func_32(&uLocal_1883);
								func_82(bParam0);
								bLocal_1875 = true;
								if (iLocal_2602 != 5)
								{
									unk_0x842B2A274564CAF5(iLocal_2602);
								}
								iLocal_1878 = 0;
								bLocal_1873 = false;
								iLocal_1874 = 1;
								iLocal_2599 = 1;
								func_116(2, bParam0);
								unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 4);
								unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 20);
								unk_0xB0550BC91B0159D6(&(Local_68.f_2[bParam0 /*23*/].f_6), 3);
							}
							else
							{
								func_116(27, bParam0);
							}
						}
					}
				}
			}
			if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 7) && bLocal_1875 == 0)
			{
				iLocal_2599 = 1;
				func_116(1, bParam0);
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 7);
			}
		}
		else
		{
			unk_0xE4FA4FBF0BAFD2A8(0);
			if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 4) && Local_68.f_2[bParam0 /*23*/].f_7 == 5)
			{
				if (unk_0xF09A4F413B0D30EB(0, 177))
				{
					unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 4);
					unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 5);
					iLocal_2599 = 1;
					func_116(24, bParam0);
				}
			}
			else if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 5) && Local_68.f_2[bParam0 /*23*/].f_7 == 7)
			{
				if (unk_0xF09A4F413B0D30EB(0, 177))
				{
					unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 5);
					unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 4);
					iLocal_2599 = 1;
					func_116(25, bParam0);
				}
			}
			if (!BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 3) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 3))
			{
				if (Local_68.f_2[bParam0 /*23*/].f_7 == 5 && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 4))
				{
					unk_0x7653D561C9574763(0, 99, 1);
					unk_0x7653D561C9574763(0, 100, 1);
					if (unk_0xF09A4F413B0D30EB(0, 179))
					{
						func_116(20, bParam0);
						func_115(bParam0, 0, 0);
						iLocal_2599 = 1;
						unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 3);
					}
				}
			}
			if (bLocal_1873)
			{
				if (func_114())
				{
					if (iLocal_2600 == 0)
					{
						if (unk_0xF09A4F413B0D30EB(0, 176))
						{
							if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
							{
								if (func_140(unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/])))
								{
									func_116(9, bParam0);
									if (iLocal_2602 != 5)
									{
										unk_0x842B2A274564CAF5(iLocal_2602);
									}
									iLocal_1878 = 0;
									bLocal_1873 = false;
									iLocal_1874 = 1;
									Local_263[iLocal_1672 /*44*/].f_4.f_15 = { Local_1722[bLocal_1708 /*3*/] };
									Local_263[iLocal_1672 /*44*/].f_4.f_5 = { unk_0x1A3931A61B3223A2(Local_263[iLocal_1672 /*44*/].f_4.f_15) };
									Local_263[iLocal_1672 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
									Local_263[iLocal_1672 /*44*/].f_4.f_33 = 0f;
									Local_263[iLocal_1672 /*44*/].f_4.f_34 = -1;
									unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 4);
									unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 20);
									func_115(bParam0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_2599 = 1;
								}
								else
								{
									func_116(27, bParam0);
								}
							}
						}
					}
				}
				if (unk_0x83666F9FB8FEBD4B() > 5000)
				{
					if (iLocal_2602 != 5)
					{
						unk_0x842B2A274564CAF5(iLocal_2602);
					}
					iLocal_1878 = 0;
					bLocal_1873 = false;
					iLocal_1874 = 1;
				}
			}
			else if (!iLocal_1874)
			{
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					if (iLocal_2602 != 5)
					{
						unk_0x842B2A274564CAF5(iLocal_2602);
					}
					bLocal_1873 = false;
					iLocal_1878 = 0;
					iLocal_1874 = 1;
				}
			}
		}
	}
	else
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
	}
	unk_0xCF0E3BB302EAC0EA(uLocal_1709);
	unk_0x2E04B7B46A3670E5(4);
	unk_0xE53134ABB42F336F(1);
	if (unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0))
	{
		unk_0x694170BB080C08FF(uLocal_1714, fLocal_1718, fLocal_1719, fLocal_1716, fLocal_1717, 0, 0, 0, 255, 0);
	}
}

int func_114()
{
	if (unk_0x876B1078E90C91CB(uLocal_2601))
	{
		if (unk_0xA24FDA4986456697(uLocal_2601))
		{
			return 1;
		}
	}
	if (bLocal_1873 || !iLocal_1874)
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/].f_1))
	{
		if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1))
		{
			if (!unk_0xF68107C40359970C(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
				}
				else if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
				{
					if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_116(int iParam0, bool bParam1)
{
	if (!func_15(Local_68.f_2[bParam1 /*23*/].f_1))
	{
		if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam1 /*23*/].f_1))
		{
			if (!func_139())
			{
				if (iParam0 != 0)
				{
					func_20(&uLocal_2622, 8, unk_0x8AF984152F749D80(Local_68.f_2[bParam1 /*23*/].f_1), "FM_TAXI", 0, 1);
					if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
					{
						unk_0xF30F15F203736DE4(unk_0x8AF984152F749D80(Local_68.f_2[bParam1 /*23*/].f_1), unk_0xE2D3D51028F0428A(), 4000, 0, 2);
					}
					switch (iParam0)
					{
						case 1:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 2:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 5:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 7:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 9:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 12:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 13:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 24:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 25:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 26:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 27:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						
						case 20:
							func_117(&uLocal_2622, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
							iParam0 = 0;
							break;
						}
				}
			}
			else
			{
				iParam0 = 0;
			}
		}
	}
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 1;
	return func_118(sParam2, iParam3, 0);
}

int func_118(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_137();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_136();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, false);
			if (bParam2)
			{
				func_128();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_127())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_126())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_125();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_124();
		func_119();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_137();
	}
	return 0;
}

void func_119()
{
	if (!func_120())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_120()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_123())
	{
		return 0;
	}
	if (func_121(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_121(int iParam0)
{
	return func_122(iParam0, 20);
}

var func_122(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_123()
{
	return -1;
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_125()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xB0550BC91B0159D6(&Global_8137, 16);
}

int func_126()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_128()
{
	if (func_135(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_129();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_129()
{
	func_130();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_130()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_133(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_132(unk_0xE2D3D51028F0428A());
			if (func_131(iVar0) && (!func_135(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_131(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_131(int iParam0)
{
	return iParam0 < 3;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_133(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_133(int iParam0)
{
	if (func_131(iParam0))
	{
		return func_134(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_134(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_135(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_136()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

void func_137()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

void func_138(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_139()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_26(Global_2815059.f_238[iVar0 /*3*/]))
		{
			if (func_107(Param0, Global_2815059.f_238[iVar0 /*3*/], 200f, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_141()
{
	if (bLocal_1875)
	{
		if (bLocal_1873)
		{
			func_142();
		}
		else if (!unk_0xA24FDA4986456697(uLocal_2601))
		{
			iLocal_1878 = 1;
			iLocal_2599 = 1;
		}
		else
		{
			func_142();
		}
		bLocal_1873 = true;
		iLocal_1874 = 1;
	}
	else
	{
		func_142();
	}
}

void func_142()
{
	struct<3> Var0;
	
	unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SET_INPUT_EVENT");
	unk_0x4F47E317C74C543B(9);
	unk_0x6F06CF0E9AB02847();
	bLocal_1708++;
	if (bLocal_1708 > (iLocal_1707 - 1))
	{
		bLocal_1708 = false;
	}
	if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
	{
		Var0 = { unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/]) };
		if (!func_26(Var0))
		{
			unk_0x262D43EBE3CA4397(Var0.f_0, Var0.f_1);
		}
	}
}

void func_143()
{
	if (bLocal_1875)
	{
		if (bLocal_1873)
		{
			func_144();
		}
		else if (!unk_0xA24FDA4986456697(uLocal_2601))
		{
			iLocal_1878 = 1;
			iLocal_2599 = 1;
		}
		else
		{
			func_144();
		}
		bLocal_1873 = true;
		iLocal_1874 = 1;
	}
	else
	{
		func_144();
	}
}

void func_144()
{
	struct<3> Var0;
	
	unk_0xEA5DEA46C3EE64D3(uLocal_1714, "SET_INPUT_EVENT");
	unk_0x4F47E317C74C543B(8);
	unk_0x6F06CF0E9AB02847();
	bLocal_1708 = (bLocal_1708 - 1);
	if (bLocal_1708 < 0)
	{
		bLocal_1708 = (iLocal_1707 - 1);
		if (bLocal_1708 < 0)
		{
			bLocal_1708 = false;
		}
	}
	if (unk_0x12DD4A0B247D9B4D(Local_1722[bLocal_1708 /*3*/]))
	{
		Var0 = { unk_0x1A3931A61B3223A2(Local_1722[bLocal_1708 /*3*/]) };
		if (!func_26(Var0))
		{
			unk_0x262D43EBE3CA4397(Var0.f_0, Var0.f_1);
		}
	}
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 221) * 127f));
		}
	}
}

void func_146(int iParam0)
{
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (!unk_0x876B1078E90C91CB(uLocal_2601))
		{
			if ((!func_153() && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				uLocal_2601 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
				unk_0x3FB84450A94CB528(uLocal_2601, unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), Local_2611, 1);
				func_149(iParam0);
				unk_0x8D32379EC749B177(uLocal_2601, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				unk_0xAA4AFC804C4BA788(1);
				iLocal_2599 = 1;
				Global_112439 = 1;
			}
		}
		else if (bLocal_1875)
		{
			if (!Global_112439)
			{
				if (iLocal_1878)
				{
					if (!unk_0xA24FDA4986456697(uLocal_2601))
					{
						iLocal_2602 = unk_0x964CD83935AD0ED1();
						if (iLocal_2602 != 5)
						{
							if (unk_0x964CD83935AD0ED1() != 4)
							{
								unk_0x842B2A274564CAF5(4);
							}
						}
						func_41(4, 1, -1);
						func_148();
						Global_112439 = 1;
						unk_0xDD786B89B15AA63F(uLocal_2601, 1);
						unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
						unk_0xAA4AFC804C4BA788(1);
						func_149(iParam0);
						iLocal_2599 = 1;
						iLocal_1878 = 0;
						Global_112439 = 1;
					}
				}
			}
			if ((((unk_0x964CD83935AD0ED1() == 4 && !unk_0xF09A4F413B0D30EB(2, 23)) && !func_153()) && !func_78(8, -1)) && Local_68.f_2[iParam0 /*23*/].f_7 != 6)
			{
				if (unk_0xA24FDA4986456697(uLocal_2601))
				{
					func_149(iParam0);
				}
			}
			else if ((unk_0xA24FDA4986456697(uLocal_2601) && !func_153()) && !func_78(8, -1))
			{
				unk_0xDD786B89B15AA63F(uLocal_2601, 0);
				unk_0x94953C3FF0664F66(0f);
				unk_0x080C97B891E2F3AA(0f, 1065353216);
				if (iLocal_2602 != 5)
				{
					unk_0x842B2A274564CAF5(iLocal_2602);
				}
				iLocal_1878 = 0;
				bLocal_1873 = false;
				iLocal_1874 = 1;
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				unk_0xAA4AFC804C4BA788(0);
				Global_112439 = 0;
				unk_0xBD18A1EF31F0166B();
				unk_0x1C35FDD57F36FBEA();
				unk_0xCD6C63A108B12434(0);
				iLocal_2599 = 1;
				func_147();
			}
		}
		else if (unk_0xA24FDA4986456697(uLocal_2601))
		{
			func_149(iParam0);
		}
	}
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1707)
	{
		if (bLocal_1875)
		{
			if (iLocal_63 == Local_1722[iVar0 /*3*/])
			{
				bLocal_1708 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0xEA5DEA46C3EE64D3(uLocal_1714, "HIGHLIGHT_DESTINATION");
	unk_0x4F47E317C74C543B(bLocal_1708);
	unk_0x6F06CF0E9AB02847();
}

void func_148()
{
	if (!func_26(Local_263[iLocal_1672 /*44*/].f_4.f_5))
	{
		if (unk_0x876B1078E90C91CB(uLocal_2601) && unk_0xA24FDA4986456697(uLocal_2601))
		{
			unk_0x262D43EBE3CA4397(Local_263[iLocal_1672 /*44*/].f_4.f_5, Local_263[iLocal_1672 /*44*/].f_4.f_5.f_1);
			unk_0xF3F07AAF13926729(0);
			unk_0xCD6C63A108B12434(1400);
		}
	}
}

void func_149(int iParam0)
{
	if (unk_0x876B1078E90C91CB(uLocal_2601))
	{
		func_150(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), &uLocal_2601, Local_2615);
		unk_0x0A18C027350D3C19(uLocal_2601, fLocal_2614);
		unk_0x74789DA66781DB64(uLocal_2601, 0.01f);
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 13))
		{
			unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 13);
		}
	}
	else if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 13))
	{
		func_148();
		unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 13);
	}
	unk_0x676C385E11AFCA47();
	unk_0x7936E7A8DBE3DBBE();
}

void func_150(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x876B1078E90C91CB(*uParam1))
		{
			Var0 = { unk_0x63A8BF5E6C2BF85C(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_152(unk_0xCACAD935C0BEE14F(iParam0, Param2) - unk_0xCACAD935C0BEE14F(iParam0, Local_2611)) };
			func_151(Var6, &uVar3, &uVar4, 1);
			unk_0x93150D31CE38FE75(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_151(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0xC529D13129C03CF4(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0xC529D13129C03CF4(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

Vector3 func_152(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_153()
{
	return Global_23009;
}

void func_154(bool bParam0)
{
	var uVar0;
	
	if ((((Local_68.f_2[bParam0 /*23*/].f_7 == 2 || Local_68.f_2[bParam0 /*23*/].f_7 == 4) || Local_68.f_2[bParam0 /*23*/].f_7 == 5) || Local_68.f_2[bParam0 /*23*/].f_7 == 6) || Local_68.f_2[bParam0 /*23*/].f_7 == 7)
	{
		if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 2))
		{
			if (unk_0x87B449F4C26E764A(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
			{
				if (Local_68.f_2[bParam0 /*23*/].f_3 != -1 && unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)))
				{
					if (Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
					{
						if (unk_0x207D53F9E0190691(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) > 5f)
						{
							func_116(12, bParam0);
							if (bLocal_1880 > iLocal_1879)
							{
								if (!unk_0x177106D5E97D1958(unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)))))
								{
									unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bParam0);
									unk_0xDA63AAD3559A7FB5(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)), 37, unk_0x1AC3ECC14FA9CD77(2));
									if (!unk_0xF847447D4467709D())
									{
										func_175("TXI_HWRUN", -1);
									}
								}
							}
						}
						else if (bLocal_1880 > iLocal_1879)
						{
							if (func_172(unk_0x9E2D6C50374FCFA9()) >= bLocal_1880 && unk_0x616226219F841621(bLocal_1880, 0, 0, 1, -1, 0))
							{
								if (Local_68.f_2[bParam0 /*23*/].f_7 == 6)
								{
									func_116(5, bParam0);
								}
								else
								{
									func_116(13, bParam0);
								}
								if (func_171())
								{
									func_158(-1834046564, bLocal_1880, &uVar0, 0, 1, 0);
								}
								else
								{
									func_155(-bLocal_1880, 0);
									unk_0x633310C9B4B8972C(bLocal_1880, 0, 1, 0);
								}
							}
							else
							{
								func_116(7, bParam0);
								if (!unk_0x177106D5E97D1958(unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)))))
								{
									unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bParam0);
									unk_0xDA63AAD3559A7FB5(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_3)), 37, unk_0x1AC3ECC14FA9CD77(2));
									if (!unk_0xF847447D4467709D())
									{
										func_175("TXI_HNMON", -1);
									}
								}
							}
						}
						else
						{
							func_116(13, bParam0);
						}
						unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 2);
						func_32(&uLocal_1704);
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1)
{
	func_157(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_156(iParam0, 0);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_157(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 = (Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_156(iVar1, 0);
	}
}

void func_158(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_171())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_159(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_159(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_170()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_165(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_160(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_171())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_164(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_162(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_162(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_163(&(uParam0->f_14));
	func_163(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_163(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_164(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_171())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_167(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_169(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_168();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar36);
	}
}

void func_168()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_169(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, bParam0);
	}
	return uVar0;
}

int func_170()
{
	return Global_1574918;
}

int func_171()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_172(int iParam0)
{
	var uVar0;
	
	uVar0 = func_173(iParam0);
	return uVar0;
}

int func_173(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return unk_0xEEE6DAFBF451B942(-1);
		}
		else if (func_174(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_175(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_176(bool bParam0)
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (unk_0xE5965CDF24F93A9F(iLocal_1712))
	{
		return 1;
	}
	else
	{
		unk_0xD69A0C3662175E68(iLocal_1713);
		uLocal_1714 = unk_0x528279F3F1EEF869(sVar0);
		if (unk_0x0152AA00FA3130F1(iLocal_1713) && unk_0x0347CCBD719C8ADC(uLocal_1714))
		{
			if (func_13(Local_68.f_2[bParam0 /*23*/]))
			{
				iLocal_1712 = unk_0x0E536D72AB30F4C8(iLocal_1713, unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1), 0, 0, 0);
				unk_0x9A97DC6DBC7B223D(iLocal_1712, unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), unk_0x7F0054A115D66F44(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), "Chassis"), Local_2605, Local_2608, 0, 0, 0, 0, 2, 1, 0);
				if (!unk_0xBB75DCB31B62483C("taxi"))
				{
					unk_0x7F31E4CDB9FB2193("taxi", 0);
					if (!unk_0x593C5E295B4590F4(unk_0x15CAA6D7B11F1A7C(iLocal_1712)))
					{
						unk_0xC043F1F3CF279111(unk_0x15CAA6D7B11F1A7C(iLocal_1712));
					}
				}
				uLocal_1709 = unk_0x014679E62446327A("taxi");
				return 1;
			}
		}
	}
	return 0;
}

void func_177(int iParam0)
{
	var uVar0;
	
	if (func_180())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_7 == 8 && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 20f, 20f, 3f, 0, 1, 1))
		{
			unk_0x8FB472886552D737("TAXI_HAIL");
			if (unk_0x6F940C2636C076AD("TAXI_HAIL"))
			{
				if (uLocal_1683[iParam0] == -1)
				{
					func_179(&(uLocal_1683[iParam0]), 0, "TXM_H01", 1, 0, 0, 0);
				}
				if (func_178(uLocal_1683[iParam0], 1))
				{
					unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
					if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7))
					{
						unk_0xA888F8CC04F25CC8(&uVar0);
						unk_0xD4834169F570E6D2(0, 0);
						unk_0x49D97B076E3590AC(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0xC963A45B50851768(uVar0);
						unk_0x8ACADA903FCAA42F(unk_0xE2D3D51028F0428A(), uVar0);
						unk_0x7461D7C5BA953BC7(&uVar0);
					}
					else
					{
						unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
					if (func_50("TXM_H01"))
					{
						unk_0x3410421C60BF7143(1);
					}
					Local_263[iLocal_1672 /*44*/].f_4.f_1 = iParam0;
					unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 23);
					unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 22);
					func_48(&(uLocal_1683[iParam0]));
				}
			}
		}
		else
		{
			unk_0xAFC1FBF3F6AE7B9A("TAXI_HAIL");
			func_48(&(uLocal_1683[iParam0]));
		}
	}
	else
	{
		unk_0xAFC1FBF3F6AE7B9A("TAXI_HAIL");
		func_48(&(uLocal_1683[iParam0]));
	}
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_179(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*uParam0 == -1)
		{
			func_48(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_180()
{
	if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (Local_263[iLocal_1672 /*44*/].f_4.f_1 != -1)
		{
			return 0;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			return 0;
		}
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
		{
			return 0;
		}
		if (func_181(unk_0x9E2D6C50374FCFA9(), 1, 0))
		{
			return 0;
		}
		if (func_52(0))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
		if (func_80())
		{
			return 0;
		}
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_182(int iParam0)
{
	return func_183(iParam0);
}

var func_183(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	if (((((((unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 10f, 10f, 2f, 0, 1, 0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && unk_0x207D53F9E0190691(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/])) < 3f) && !func_191(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 0)) && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) <= 0) && Local_68.f_2[iParam0 /*23*/].f_7 != 9) && Local_68.f_2[iParam0 /*23*/].f_7 != 10) && Local_68.f_2[iParam0 /*23*/].f_7 != 11)
	{
		if (BitTest(Local_263[iLocal_1672 /*44*/].f_3, (0 + iParam0)))
		{
			func_145(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_1876 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_1876 = 1;
				}
			}
			else
			{
				iLocal_1876 = 0;
			}
			if (iLocal_1876 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
						unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_3), (0 + iParam0));
						iLocal_1876 = 0;
					}
				}
			}
		}
		else
		{
			if (!BitTest(uLocal_1673, (0 + iParam0)))
			{
				if (!unk_0xF847447D4467709D())
				{
					uVar5 = func_190(1191, -1, 0);
					if ((!BitTest(uVar5, 7) || !BitTest(uVar5, 8)) || !BitTest(uVar5, 9))
					{
						if (func_87(&uLocal_1704, 20000, 0))
						{
							if ((((unk_0x6D7EE245AD1E10B0(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/])) == unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) && unk_0xEFD1745E9D77E91C(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 1119092736)) && !unk_0xD8F9DF94CD871327(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]))) && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && !func_188(unk_0x9E2D6C50374FCFA9()))
							{
								func_175("TXM_H02", -1);
								if (!BitTest(uVar5, 7))
								{
									unk_0xCED9E32812D6C7C7(&uVar5, 7);
								}
								else if (!BitTest(uVar5, 8))
								{
									unk_0xCED9E32812D6C7C7(&uVar5, 8);
								}
								else
								{
									unk_0xCED9E32812D6C7C7(&uVar5, 9);
								}
								func_186(1191, uVar5, -1, 1, 0);
								func_32(&uLocal_1704);
								unk_0xCED9E32812D6C7C7(&uLocal_1673, (0 + iParam0));
							}
						}
					}
				}
			}
			if (unk_0x4C1B8C5717647539(0, 23))
			{
				if (unk_0xC9D9444186B5A374() > 275)
				{
					if (!BitTest(Local_263[iLocal_1672 /*44*/].f_3, (0 + iParam0)))
					{
						if (func_185(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/])) == 1)
						{
							if (unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 1, 0))
							{
								iVar4 = 1;
							}
							else if (unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 2, 0))
							{
								iVar4 = 2;
							}
							else
							{
								iVar4 = 0;
							}
						}
						else if (unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 2, 0))
						{
							iVar4 = 2;
						}
						else if (unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), 0, 0))
						{
							iVar4 = 0;
						}
						else
						{
							iVar4 = 1;
						}
						unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
						unk_0xB486640392EC50BB(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]), -1, iVar4, 1f, 8388608, 0);
						unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_3), (0 + iParam0));
						iLocal_2599 = 1;
					}
				}
			}
			else
			{
				unk_0x5AE11BC36633DE4E(0);
			}
		}
	}
	else
	{
		if (BitTest(uLocal_1673, (0 + iParam0)))
		{
			unk_0xB0550BC91B0159D6(&uLocal_1673, (0 + iParam0));
			if (func_50("TXM_H02"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
		if (BitTest(Local_263[iLocal_1672 /*44*/].f_3, (0 + iParam0)))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				iLocal_1876 = 0;
			}
			unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_3), (0 + iParam0));
		}
	}
}

int func_185(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0xCACAD935C0BEE14F(iParam0, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0xCACAD935C0BEE14F(iParam0, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_186(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_187(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, iParam3);
	}
}

int func_187(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_170();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

bool func_188(int iParam0)
{
	return func_189(iParam0) == joaat("weapon_minigun");
}

int func_189(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_579;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_187(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x7158135695FAE89D(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xAB793EA186AB8DAA(iParam0, (iVar0 - 1), 0);
				if (unk_0xF68107C40359970C(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_192(bool bParam0)
{
	if (Local_68.f_2[bParam0 /*23*/].f_2 == iLocal_1672)
	{
		if (Local_68.f_2[bParam0 /*23*/].f_3 == -1)
		{
			if (Local_68.f_2[bParam0 /*23*/].f_7 == 3)
			{
				if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
				{
					if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1))
					{
						if (func_13(Local_68.f_2[bParam0 /*23*/]))
						{
							if (unk_0xF6F5D18EF8EAB859(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0))
							{
								func_193(bParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_47(bParam0);
}

void func_193(int iParam0)
{
	if (!unk_0x12DD4A0B247D9B4D(uLocal_1674[iParam0]))
	{
		uLocal_1674[iParam0] = unk_0xEFD6451BF0F3352F(unk_0xA5677134B9672173(Local_68.f_2[iParam0 /*23*/]));
		unk_0x1A5B5BA56167D412(uLocal_1674[iParam0], 198);
		unk_0xAF62582F3EA39095(uLocal_1674[iParam0], "TXM_BLIP");
		unk_0x9705014C37E60003(uLocal_1674[iParam0], 1);
		unk_0xE5D4469DCCFB5170(uLocal_1674[iParam0], 7000);
		unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 12);
	}
}

void func_194(bool bParam0)
{
	if (!BitTest(Global_2815059.f_836, 1))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_1674[bParam0]))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2815059.f_836), true);
		}
	}
	if (BitTest(Local_263[iLocal_1672 /*44*/].f_1, 0))
	{
		if (Local_68.f_2[bParam0 /*23*/].f_2 == iLocal_1672)
		{
			unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_1), false);
		}
	}
}

void func_195(bool bParam0)
{
	var uVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	bool bVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1) && func_13(Local_68.f_2[bParam0 /*23*/]))
	{
		if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1) && unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/]))
		{
			iVar3 = 3;
			Var4 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0) };
			if (Local_68.f_2[bParam0 /*23*/].f_7 != 11)
			{
				if (Local_68.f_2[bParam0 /*23*/].f_7 != 9)
				{
					if (Local_68.f_2[bParam0 /*23*/].f_7 != 10)
					{
						unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 251, 1);
						if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_3, bParam0))
						{
							if (func_218(bParam0))
							{
								func_39(1, 1, 1);
								unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bParam0);
							}
						}
						if (Local_68.f_2[bParam0 /*23*/].f_7 != 8)
						{
							unk_0x7928629159F456D1(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1);
						}
					}
				}
			}
			func_217(bParam0);
			switch (Local_68.f_2[bParam0 /*23*/].f_7)
			{
				case 0:
					break;
				
				case 1:
					if (Local_68.f_2[bParam0 /*23*/].f_2 != -1 && Local_68.f_2[bParam0 /*23*/].f_2 == iLocal_1672)
					{
						if (func_11(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 0f, 0f, 0f, 0))
						{
							if (func_213(bParam0, func_216(unk_0x9E2D6C50374FCFA9()), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_29), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_34), 250))
							{
								Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
								unk_0x3B8F94419979A0B1(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x15CAA6D7B11F1A7C(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_drive_to_coord"), 1))
						{
							iVar1 = iLocal_1720;
							unk_0x3B8F94419979A0B1(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, 12f, 0, unk_0x15CAA6D7B11F1A7C(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
					}
					break;
				
				case 2:
					if (Local_68.f_2[bParam0 /*23*/].f_2 != -1 && Local_68.f_2[bParam0 /*23*/].f_2 == iLocal_1672)
					{
						if (!BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2, 21))
						{
							if (func_210(Var4, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_29, &(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_29)))
							{
								unk_0x7F3313F2F80DD857(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 0.5f);
								if (BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2, 14))
								{
									unk_0x5B7AF57D366861F2(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_29, 0, 60f, 0);
								}
								else
								{
									unk_0x5B7AF57D366861F2(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_26, Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_29, 3, 60f, 0);
								}
								iLocal_2599 = 1;
								unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 21);
							}
						}
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
					}
					break;
				
				case 3:
					if (Local_68.f_2[bParam0 /*23*/].f_2 != -1 && Local_68.f_2[bParam0 /*23*/].f_2 == iLocal_1672)
					{
						if (!BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2, 23))
						{
							unk_0x8024C4A99A470A8E(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 2500, unk_0x2E87280918B16506("NORMAL"), 0);
							unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 23);
						}
						if (!BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2, 22))
						{
							unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
							iLocal_2599 = 1;
							unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
						}
						else if (!unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
						{
							if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1) || unk_0xF9EEC73AE0B9C439(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) != 5)
							{
								unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_2 /*44*/].f_4.f_2), 22);
							}
						}
					}
					break;
				
				case 4:
					if (Local_68.f_2[bParam0 /*23*/].f_3 != -1 && Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
					{
						Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30 = { 0f, 0f, 0f };
						Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_33 = 0f;
						Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_34 = -1;
					}
					if (func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1))
					{
						func_115(bParam0, 0, 0);
					}
					unk_0x8FB472886552D737("ODDJOBS@TAXI@DRIVER");
					if (unk_0x6F940C2636C076AD("ODDJOBS@TAXI@DRIVER"))
					{
						if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x91243FFD31A90906(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
								unk_0x49D97B076E3590AC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							}
						}
						else if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
							{
								if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1))
								{
									unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Var4, 5, 5f, 1076627627, -1f, 1f, 1);
								}
							}
							else if (unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0, 0))
							{
								unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
								unk_0x49D97B076E3590AC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 5:
					if (Local_68.f_2[bParam0 /*23*/].f_3 != -1 && Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
					{
						if (func_11(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0) && func_11(Local_68.f_2[bParam0 /*23*/].f_8, Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0))
						{
							if (Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_34 == -1)
							{
								if (func_209(Local_68.f_2[bParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_33), bParam0) || func_199(Local_68.f_2[bParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_33), bParam0))
								{
									unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									func_115(bParam0, 0, 0);
									iLocal_2599 = 1;
								}
								Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
							}
							else
							{
								iVar8 = unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]);
								if (func_196(&iVar8, Local_68.f_2[bParam0 /*23*/].f_8, &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_33), &(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_34), 1000))
								{
									unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 14);
									Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_34 = 0;
									func_115(bParam0, 0, 0);
									iLocal_2599 = 1;
								}
							}
						}
						if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							unk_0x8FB472886552D737("ODDJOBS@TAXI@DRIVER");
							if (unk_0x6F940C2636C076AD("ODDJOBS@TAXI@DRIVER"))
							{
								unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
								unk_0x49D97B076E3590AC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
						}
						else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							unk_0xB5CB6BC7AD4CDCCE(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, 0f, 0f, 0f, 0))
						{
							if (!func_8(bParam0))
							{
								if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_perform_sequence"), 1))
								{
									fVar2 = 15f;
									iVar1 = iLocal_1720;
									iVar3 = 3;
									if (BitTest(Local_68.f_2[bParam0 /*23*/].f_6, 3) || BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 3))
									{
										fVar2 = 20f;
										iVar1 = iLocal_1721;
									}
									if (BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2, 14))
									{
										iVar3 = 0;
									}
									func_115(bParam0, 1, 1);
									unk_0x7F3313F2F80DD857(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 0.5f);
									unk_0xA888F8CC04F25CC8(&uVar0);
									unk_0x70D024128CE0C114(0, unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, fVar2, iVar1, 45f);
									unk_0x5B7AF57D366861F2(0, unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_30, Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_33, iVar3, 60f, 1);
									unk_0xC963A45B50851768(uVar0);
									unk_0x8ACADA903FCAA42F(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), uVar0);
									unk_0x7461D7C5BA953BC7(&uVar0);
									iLocal_2599 = 1;
								}
							}
						}
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
						unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
					}
					break;
				
				case 6:
					if (Local_68.f_2[bParam0 /*23*/].f_3 != -1 && Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
					{
						if (!BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2, 24))
						{
							if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_perform_sequence"), 1))
							{
								unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1), 5, 5f, 1076627627, -1f, 1f, 1);
								iLocal_2599 = 1;
								unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!unk_0xA7A8E89EA6C5E222(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])))
							{
								if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1) || unk_0xF9EEC73AE0B9C439(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) != 5)
								{
									unk_0xB0550BC91B0159D6(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 24);
								}
							}
							func_7(bParam0, 1);
						}
					}
					break;
				
				case 7:
					if (Local_68.f_2[bParam0 /*23*/].f_3 != -1 && Local_68.f_2[bParam0 /*23*/].f_3 == iLocal_1672)
					{
						iLocal_2599 = 1;
						if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (unk_0x91243FFD31A90906(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								unk_0x8FB472886552D737("ODDJOBS@TAXI@DRIVER");
								if (unk_0x6F940C2636C076AD("ODDJOBS@TAXI@DRIVER"))
								{
									unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
									unk_0x49D97B076E3590AC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
								}
							}
						}
						else if (!unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!BitTest(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2, 25))
							{
								if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1) || unk_0xF9EEC73AE0B9C439(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) != 5)
								{
									func_115(bParam0, 1, 1);
									unk_0x5B7AF57D366861F2(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), unk_0x6B62510F212526DC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 1), unk_0x82FE2343F8BDFF0B(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1)), 3, 60f, 0);
								}
								unk_0xCED9E32812D6C7C7(&(Local_263[Local_68.f_2[bParam0 /*23*/].f_3 /*44*/].f_4.f_2), 25);
							}
						}
					}
					break;
				
				case 8:
					unk_0x7928629159F456D1(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0);
					if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0x8FB472886552D737("ODDJOBS@TAXI@DRIVER");
						if (unk_0x6F940C2636C076AD("ODDJOBS@TAXI@DRIVER"))
						{
							unk_0xC89EA639A6F338A6(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1));
							unk_0x49D97B076E3590AC(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0xB5CB6BC7AD4CDCCE(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_vehicle_mission"), 1))
					{
						unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1), 8, 12f, 786599, 400f, -1f, 0);
					}
					break;
				
				case 9:
				case 10:
					func_7(bParam0, 0);
					if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					{
						unk_0xA02157241423F32E(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						unk_0xA02157241423F32E(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xFCF559C8631ABED7(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						unk_0xA02157241423F32E(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 251, 0);
					unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 0);
					unk_0x7928629159F456D1(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0);
					if (((!unk_0x51B334B227EC8042(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1)) && !func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), joaat("script_task_smart_flee_ped"), 1)) && !func_9(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), -251125078, 1)) && unk_0xF9EEC73AE0B9C439(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/])) != 8)
					{
						if (Local_68.f_2[bParam0 /*23*/].f_7 == 10)
						{
							bVar7 = true;
						}
						if (unk_0xAB793EA186AB8DAA(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), -1, 0) != unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1))
						{
							bVar7 = true;
						}
						if (Local_68.f_2[bParam0 /*23*/].f_4 != -1)
						{
							if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_4)))
							{
								iVar9 = unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[bParam0 /*23*/].f_4)));
							}
						}
						if (!unk_0xE5965CDF24F93A9F(iVar9))
						{
							iVar9 = 0;
						}
						if (bVar7)
						{
							unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 2, 0);
							unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 65536, 1);
							if (unk_0xE5965CDF24F93A9F(iVar9))
							{
								unk_0x7734082B0EDB0BE0(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), iVar9, 500f, -1, 0, 0);
							}
							else
							{
								unk_0x84918839A90C954C(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), Var4, 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 65536, 0);
							unk_0xDC6110E0F8FF9DA0(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 2, 1);
							if (unk_0xE5965CDF24F93A9F(iVar9))
							{
								unk_0xB69D13E19147910F(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), iVar9, 8, 25f, 790564, 200f, 15f, 1);
							}
							else
							{
								unk_0xFDB121077308E944(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), Var4, 8, 25f, 790564, 200f, 15f, 1);
							}
						}
					}
					unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 1);
					break;
				
				case 11:
					if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/]))
					{
						unk_0x7928629159F456D1(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0);
						func_28(&(Local_68.f_2[bParam0 /*23*/]));
					}
					if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/].f_1))
					{
						unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 251, 0);
						unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 0);
						func_28(&(Local_68.f_2[bParam0 /*23*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			fVar10 = unk_0x987A5F1E1A67E3C0(func_216(unk_0x9E2D6C50374FCFA9()), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 1), 1);
			if (fVar10 < fLocal_2620)
			{
				fLocal_2620 = fVar10;
				bLocal_2619 = bParam0;
			}
		}
	}
	if (Local_68.f_2[bParam0 /*23*/].f_7 == 11)
	{
		if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/]))
			{
				unk_0x7928629159F456D1(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0);
				func_28(&(Local_68.f_2[bParam0 /*23*/]));
			}
		}
		if (unk_0xCCDCD6672DAE6835(Local_68.f_2[bParam0 /*23*/].f_1))
		{
			if (unk_0x07B2F8356DC13CF4(Local_68.f_2[bParam0 /*23*/].f_1))
			{
				if (!func_15(Local_68.f_2[bParam0 /*23*/].f_1))
				{
					unk_0xD6A76BAB45A4B460(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 251, 0);
					unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1), 0);
				}
				func_28(&(Local_68.f_2[bParam0 /*23*/].f_1));
			}
		}
	}
}

int func_196(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	float fVar31;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_198(Param1))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *uParam6 + 2;
	iVar25 = 50;
	unk_0x2EE5FFF3E1E3400D((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7)));
	if (unk_0xF8805443C3DB6256((Param1.f_0 - IntToFloat(iParam7)), (Param1.f_1 - IntToFloat(iParam7)), (Param1.f_0 + IntToFloat(iParam7)), (Param1.f_1 + IntToFloat(iParam7))))
	{
		while (!bVar19 && *uParam6 < iVar24)
		{
			if (Param1.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x15CEDAB46D800682(Param1, *uParam6, &Var28, &fVar31, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0xEA3E64155DA5F4D9(Var28, 1, iVar20, 1077936128, 0);
				if (unk_0x958AC759881D0B58(uVar18))
				{
					if (unk_0x13FD00A258A58752(Var28, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (fVar31 < 90f || fVar31 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0x535E2CA2F0DA34D4(uVar18) || !unk_0xA202F3522092063D(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (unk_0xBBDA792448DB5A89(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * unk_0xBBDA792448DB5A89(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.5f * (unk_0xBBDA792448DB5A89(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.5f * unk_0xBBDA792448DB5A89(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (unk_0x4C1EEF24CF4B2752(Var28, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param1.f_2 - Var28.f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_197(Param1, Var28) || fVar17 < 0.5f)
						{
							Var28 = { unk_0x6DB7FBD602C51670(Var28, fVar31, fVar15, 0f, 0f) };
							if (unk_0x55A0C756C4A8220C(*iParam0, 0))
							{
								iVar11 = *iParam0;
							}
							if (!unk_0x488E34A772939B4C(Var28, 3f, 3f, 3f, iVar11))
							{
								if (func_209(Var28, &Var28, &fVar31, 1) || func_199(Var28, &Var28, &fVar31, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*uParam6++;
			if (*uParam6 >= iVar25)
			{
				Var28 = { Param1 };
				bVar19 = true;
			}
		}
	}
	if (bVar19)
	{
		*uParam4 = { Var28 };
		*uParam5 = fVar31;
		Var2 = { Param1 - *uParam4 };
		Var2.f_2 = 0f;
		fLocal_1706 = unk_0x652D2EEEF1D3E62C(Var2);
		if (fLocal_1706 != 0f)
		{
		}
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = unk_0x2A488C176D52CCA5(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_198(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x717DD0ABF4A97737(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x3C57C2F07FEE34D2("SanAnd", uVar0) || unk_0x3C57C2F07FEE34D2("Alamo", sVar0)) || unk_0x3C57C2F07FEE34D2("ArmyB", sVar0)) || unk_0x3C57C2F07FEE34D2("BhamCa", sVar0)) || unk_0x3C57C2F07FEE34D2("Baytre", sVar0)) || unk_0x3C57C2F07FEE34D2("BradT", sVar0)) || unk_0x3C57C2F07FEE34D2("BradP", sVar0)) || unk_0x3C57C2F07FEE34D2("CANNY", sVar0)) || unk_0x3C57C2F07FEE34D2("CCreak", sVar0)) || unk_0x3C57C2F07FEE34D2("ChamH", sVar0)) || unk_0x3C57C2F07FEE34D2("CHU", sVar0)) || unk_0x3C57C2F07FEE34D2("COSI", sVar0)) || unk_0x3C57C2F07FEE34D2("CMSW", sVar0)) || unk_0x3C57C2F07FEE34D2("Cypre", sVar0)) || unk_0x3C57C2F07FEE34D2("Desrt", sVar0)) || unk_0x3C57C2F07FEE34D2("ELGorl", sVar0)) || unk_0x3C57C2F07FEE34D2("Galli", sVar0)) || unk_0x3C57C2F07FEE34D2("Galfish", sVar0)) || unk_0x3C57C2F07FEE34D2("Harmo", sVar0)) || unk_0x3C57C2F07FEE34D2("HumLab", sVar0)) || unk_0x3C57C2F07FEE34D2("Jail", sVar0)) || unk_0x3C57C2F07FEE34D2("LAct", sVar0)) || unk_0x3C57C2F07FEE34D2("LDam", sVar0)) || unk_0x3C57C2F07FEE34D2("Lago", sVar0)) || unk_0x3C57C2F07FEE34D2("MTChil", sVar0)) || unk_0x3C57C2F07FEE34D2("MTJose", sVar0)) || unk_0x3C57C2F07FEE34D2("MTGordo", sVar0)) || unk_0x3C57C2F07FEE34D2("NCHU", sVar0)) || unk_0x3C57C2F07FEE34D2("Oceana", sVar0)) || unk_0x3C57C2F07FEE34D2("Palmpow", sVar0)) || unk_0x3C57C2F07FEE34D2("PBluff", sVar0)) || unk_0x3C57C2F07FEE34D2("Paleto", sVar0)) || unk_0x3C57C2F07FEE34D2("PalCov", sVar0)) || unk_0x3C57C2F07FEE34D2("PalFor", sVar0)) || unk_0x3C57C2F07FEE34D2("PalHigh", sVar0)) || unk_0x3C57C2F07FEE34D2("RTRAK", sVar0)) || unk_0x3C57C2F07FEE34D2("Rancho", sVar0)) || unk_0x3C57C2F07FEE34D2("SANDY", sVar0)) || unk_0x3C57C2F07FEE34D2("TongvaH", sVar0)) || unk_0x3C57C2F07FEE34D2("TongvaV", sVar0)) || unk_0x3C57C2F07FEE34D2("Zenora", sVar0)) || unk_0x3C57C2F07FEE34D2("Slab", sVar0)) || unk_0x3C57C2F07FEE34D2("WindF", sVar0)) || unk_0x3C57C2F07FEE34D2("Zancudo", sVar0)) || unk_0x3C57C2F07FEE34D2("SanChia", sVar0)) || unk_0x3C57C2F07FEE34D2("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_199(struct<3> Param0, var uParam3, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_208(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam4 = 163.87f;
		return 1;
	}
	else if (func_208(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam4 = 0f;
		return 1;
	}
	else if (func_208(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*fParam4 = 355.3355f;
		return 1;
	}
	else if (func_208(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam4 = 94.6893f;
		return 1;
	}
	else if (func_208(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*fParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x9315DBF7D972F07A())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x9315DBF7D972F07A())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*fParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*fParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*fParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*fParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam4 = 228.7709f;
		if (unk_0x5F8653E60ED2288E(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = unk_0x2A488C176D52CCA5(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*fParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*fParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*fParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*fParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*fParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*fParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*fParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*fParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*fParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*fParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*fParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*fParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*fParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*fParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*fParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0x5F8653E60ED2288E(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*fParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*fParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*fParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*fParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*fParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*fParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*fParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x5F8653E60ED2288E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*fParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*fParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*fParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*fParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*fParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*fParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*fParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*fParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x5F8653E60ED2288E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*fParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*fParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*fParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*fParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*fParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*fParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*fParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*fParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x5F8653E60ED2288E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*fParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*fParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*fParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*fParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*fParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*fParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*fParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*fParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x5F8653E60ED2288E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (bParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*fParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*fParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*fParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*fParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*fParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*fParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*fParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*fParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*fParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*fParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*fParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*fParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (bParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*fParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*fParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*fParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*fParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*fParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*fParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*fParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_205(3, Var1))
	{
		if (func_204(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*fParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*fParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_203(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam4 = 275.4274f;
			return 1;
		}
		if (func_203(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam4 = 275.4411f;
			return 1;
		}
		if (func_203(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam4 = 301.2981f;
			return 1;
		}
		if (func_203(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*fParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*fParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_203(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x5F8653E60ED2288E(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x5F8653E60ED2288E(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x5F8653E60ED2288E(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*fParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*fParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x5853B15F78E1A265(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*fParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*fParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*fParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*fParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*fParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (unk_0xB7A628320EFF8E47(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*fParam4 = 71.6555f;
		return 1;
	}
	if (!func_201())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_205(7, Var1))
		{
			if (func_204(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*fParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_205(2, Var1))
	{
		if (func_204(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x9315DBF7D972F07A())
			{
				switch (unk_0x5853B15F78E1A265(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*fParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*fParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*fParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*fParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (bParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*fParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*fParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*fParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*fParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*fParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*fParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*fParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*fParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_200(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_200(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*fParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*fParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*fParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*fParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_12(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x5F8653E60ED2288E(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x5F8653E60ED2288E(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x5F8653E60ED2288E(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x5F8653E60ED2288E(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x5F8653E60ED2288E(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x5853B15F78E1A265(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*fParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*fParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*fParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x5853B15F78E1A265(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0x5F8653E60ED2288E(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x5F8653E60ED2288E(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*fParam4 = -20f;
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*fParam4 = 160f;
		return 1;
	}
	if (unk_0x5F8653E60ED2288E(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_200(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_201()
{
	int iVar0;
	
	iVar0 = func_129();
	if (iVar0 == 0)
	{
		if (func_202(65))
		{
			return 1;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_202(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_202(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

bool func_203(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_204(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x5F8653E60ED2288E(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_205(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_207(iParam0)) < func_206(iParam0);
}

float func_206(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_208(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_209(struct<3> Param0, var uParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x5F8653E60ED2288E(Var0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0, 1))
	{
		if (bParam5 < 4)
		{
			*uParam3 = { 413.7399f, -1608.911f, 28.161f };
			*fParam4 = 238.2568f;
		}
		else
		{
			*uParam3 = { 416.8107f, -1666.514f, 28.1758f };
			*fParam4 = 144.8478f;
		}
		return 1;
	}
	if (unk_0x5F8653E60ED2288E(Var0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		if (bParam5 < 4)
		{
			*uParam3 = { -1094.492f, -2662.27f, 12.6066f };
			*fParam4 = 196.0365f;
		}
		else
		{
			*uParam3 = { -1076.736f, -2684.039f, 12.807f };
			*fParam4 = 211.7278f;
		}
		return 1;
	}
	return 0;
}

int func_210(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	iVar10 = 1;
	if (!func_198(Param3))
	{
		iVar10 = 9;
	}
	uVar9 = unk_0xEA3E64155DA5F4D9(Param3, 1, iVar10, 1077936128, 0);
	if (unk_0x958AC759881D0B58(uVar9))
	{
		unk_0x1B54427560DFE3C3(uVar9, &Var0);
		if (unk_0xE245E7DA125485EC(Var0, 0, &Var3) && unk_0xE245E7DA125485EC(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_212(Var14, Var17);
			if (fVar20 < 0f)
			{
				*uParam7 = { Var3 };
				*uParam8 = uParam6;
				return 1;
			}
			else
			{
				*uParam7 = { Var6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_211(*uParam8, 0f, 360f);
				return 1;
			}
		}
		else if (unk_0xE245E7DA125485EC(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_211(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

float func_212(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_213(bool bParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam6 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_198(Param1))
	{
		iVar9 = 9;
	}
	func_215(Param1, Param1, &(Local_68.f_2[bParam0 /*23*/].f_12), &(Local_68.f_2[bParam0 /*23*/].f_15), iParam7);
	if (func_214(Local_68.f_2[bParam0 /*23*/].f_12, Local_68.f_2[bParam0 /*23*/].f_15))
	{
		if (!func_209(Param1, uParam4, uParam5, 1) && !func_199(Param1, uParam4, uParam5, 1))
		{
			while (!bVar8 && *uParam6 < iVar6)
			{
				if (Param1.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x15CEDAB46D800682(Param1, *uParam6, uParam4, uParam5, &uVar4, iVar9, fVar0, fVar1))
				{
					uVar5 = unk_0xEA3E64155DA5F4D9(*uParam4, 1, iVar9, 1077936128, 0);
					if (unk_0x958AC759881D0B58(uVar5))
					{
						fVar2 = (Param1.f_2 - uParam4->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_197(Param1, *uParam4) || fVar2 < 0.5f)
						{
							if (unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0))
							{
								iVar3 = unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]);
							}
							if (!unk_0x488E34A772939B4C(*uParam4, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam6++;
				if (*uParam6 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0xF8805443C3DB6256(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_215(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_95(Var0, *uParam6, 1056964608, 0) || !func_95(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0x2EE5FFF3E1E3400D(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

Vector3 func_216(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_217(bool bParam0)
{
	if (Local_68.f_2[bParam0 /*23*/].f_22 != 0 && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 6))
	{
		func_116(Local_68.f_2[bParam0 /*23*/].f_22, bParam0);
		unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 6);
	}
}

int func_218(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	uVar0 = unk_0x8AF984152F749D80(Local_68.f_2[bParam0 /*23*/].f_1);
	uVar1 = unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]);
	Var3 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_68.f_2[bParam0 /*23*/]), 0) };
	if (unk_0x51B334B227EC8042(uVar0))
	{
		return 1;
	}
	if (unk_0xCED7266BAB0BDC20(iVar0, 0))
	{
		return 1;
	}
	if (((unk_0xF798DCF92C74B531(uVar1, 2, 30000) || unk_0xF798DCF92C74B531(uVar1, 3, 30000)) || unk_0xF798DCF92C74B531(uVar1, 0, 7000)) || unk_0xF798DCF92C74B531(uVar1, 1, 7000))
	{
		return 1;
	}
	else if (unk_0x9AC74C7EF847A074(Var3, 7f, 0))
	{
		if (unk_0x9AC74C7EF847A074(Var3, 7f, 1))
		{
			func_219(iLocal_1672, 1, 37);
		}
		return 1;
	}
	else
	{
		fVar6 = 15f;
		Var7 = { Var3 };
		Var10 = { Var7 };
		Var7.f_0 = (Var7.f_0 - fVar6);
		Var7.f_1 = (Var7.f_1 - fVar6);
		Var7.f_2 = (Var7.f_2 - fVar6);
		Var10.f_0 = (Var10.f_0 + fVar6);
		Var10.f_1 = (Var10.f_1 + fVar6);
		Var10.f_2 = (Var10.f_2 + fVar6);
		if (unk_0x863026E0C5C2E52B(Var7, Var10, 0))
		{
			if (unk_0x863026E0C5C2E52B(Var7, Var10, 1))
			{
				func_219(iLocal_1672, 1, 37);
			}
			return 1;
		}
	}
	if (unk_0x81F82FFBED0CACCA(unk_0x74BD5C0C45A40771()))
	{
		uVar2 = unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x74BD5C0C45A40771()));
		if (!unk_0xF68107C40359970C(uVar2))
		{
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0x0747E45CFF1F74AA(iVar1, iVar2, 1))
				{
					func_219(iLocal_1672, 1, 37);
					return 1;
				}
			}
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				if (unk_0x0747E45CFF1F74AA(iVar0, iVar2, 1))
				{
					func_219(iLocal_1672, 1, 37);
					return 1;
				}
			}
		}
	}
	if (Local_68.f_2[bParam0 /*23*/].f_3 == -1 && Local_68.f_2[bParam0 /*23*/].f_7 == 3)
	{
	}
	return 0;
}

void func_219(bool bParam0, int iParam1, int iParam2)
{
	if (iParam0 != -1 && unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iParam0)))
	{
		if (func_10(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(bParam0)), 1, 1))
		{
			unk_0xDA63AAD3559A7FB5(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(bParam0)), iParam2, unk_0x1AC3ECC14FA9CD77(iParam1));
		}
	}
}

void func_220()
{
	if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 19))
	{
		if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 16) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 17))
		{
			if (!func_52(0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 17);
				func_39(1, 0, 0);
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 18);
			}
		}
		if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 15) && !BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 16))
		{
			if (func_52(0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 16);
			}
		}
		if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 15))
		{
			func_20(&uLocal_2622, 7, 0, "TaxiDispatch", 0, 1);
			if (func_221(&uLocal_2622, 131, "MPTXIAU", "MPTXI_E1", 0, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 15);
			}
		}
	}
}

int func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_301())
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_222(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_222(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam3))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
	iVar1 = func_299(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		iVar2 = unk_0x2E87280918B16506(sParam7);
	}
	if (func_298(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_293(uParam6))
	{
		return 0;
	}
	if (func_290(iVar0, iVar1, iVar2))
	{
		if (func_289())
		{
			return 0;
		}
		func_288();
		return func_229(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_228(iParam4))
	{
		return 0;
	}
	func_223(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_223(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_224(iParam4);
	func_288();
	Global_1641031.f_40.f_13 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 7000);
}

void func_224(int iParam0)
{
	if (func_227(iParam0))
	{
		func_226();
		return;
	}
	func_225();
}

void func_225()
{
	Global_1641031.f_40.f_10 = 0;
}

void func_226()
{
	Global_1641031.f_40.f_10 = 1;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_228(int iParam0)
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_229(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_287();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_284(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_281(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_284(uParam0, sParam3, sParam4);
		}
		return func_273(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_272(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_260(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_259(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_230(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_230(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_258();
	bVar0 = true;
	if (func_232(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

void func_231(int iParam0)
{
	Global_1641031.f_40.f_11 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_232(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_252(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_251(sParam5, bParam6, &iVar3);
	uVar5 = func_249(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_248(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_236(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_235();
	}
	func_258();
	func_234();
	func_233();
	return 1;
}

void func_233()
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_234()
{
	Global_1641031.f_40 = 3;
}

void func_235()
{
	unk_0xCED9E32812D6C7C7(&Global_8136, 8);
}

int func_236(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_237(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_237(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_247() == 0)
	{
		func_245();
		return 0;
	}
	func_244(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_128();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_243(0);
				break;
			
			case 1:
				func_243(1);
				break;
			
			case 2:
				func_243(2);
				break;
			
			case 3:
				func_243(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_242(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_240(1);
			func_242(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_238(iParam0, sParam1, bVar1, func_239(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_238(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_120())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, -1180597171, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

var func_239(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_135(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (bVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[bVar0] == 0)
						{
							Global_8669[bVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(bVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_8142);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(bVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(bVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(bVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(true);
								unk_0x4F47E317C74C543B(bVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(false);
								func_61(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_241(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(true), unk_0xBBDA792448DB5A89(bVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(false), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[bVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		bVar0++;
	}
}

void func_241(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_61(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_61(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(sParam9))
	{
		func_61(sParam9);
	}
	if (!unk_0xACC32B78196FBC2A(sParam10))
	{
		func_61(sParam10);
	}
	if (!unk_0xACC32B78196FBC2A(sParam11))
	{
		func_61(sParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_242(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

void func_243(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_244(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_4539964[iParam0 /*104*/].f_18 = uVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_246(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_246(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_247()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_246(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

int func_248(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_237(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			unk_0xCED9E32812D6C7C7(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_249(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_250(2, iParam1);
	return iParam0;
}

void func_250(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_251(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x3C57C2F07FEE34D2(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_250(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xAEF70623D03F7B02(sParam0);
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		func_253(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_253(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_255(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_254(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1660783[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_256(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_256(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE1AFE5E1E834BBF0(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1660944)
	{
		Global_1660783[iVar32 /*5*/] = { Global_1660783[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_257(&(Global_1660783[iVar32 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_257(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

void func_258()
{
	Global_1641031.f_40.f_9 = 4;
}

int func_259(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_258();
	bVar0 = false;
	return func_232(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_260(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_261(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_261(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_123();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x61042CA2A97BBB69(iVar0);
		iVar1 = func_252(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_251(sParam5, bParam6, &iVar3);
	uVar5 = func_249(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		iVar6++;
		if (!unk_0xACC32B78196FBC2A(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3C57C2F07FEE34D2(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xACC32B78196FBC2A(sVar2))
	{
		bVar12 = func_271(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_263(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_235();
	}
	func_262();
	func_234();
	func_233();
	return 1;
}

void func_262()
{
	Global_1641031.f_40.f_9 = 3;
}

int func_263(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_265(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_264(iParam0) };
			Global_8823 = iParam0;
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_264(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_265(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_128();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_270() == 0)
	{
		func_268();
		return 0;
	}
	func_267(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_243(0);
		func_243(2);
		func_243(1);
	}
	else
	{
		func_128();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_243(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_243(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_243(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_243(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_128();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_77())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_20255, 1);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_242(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_240(1);
			func_242(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_266(iParam0, sParam1, bVar1, func_239(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_266(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_120())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, 1654525105, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_267(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = uVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_268()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_269(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_269(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_269(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_271(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 10);
	iVar0 = 3;
	if (func_265(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_264(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			unk_0xCED9E32812D6C7C7(&Global_8136, true);
			unk_0xCED9E32812D6C7C7(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_272(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	func_262();
	bVar0 = true;
	if (func_261(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(120000);
		return 1;
	}
	return 0;
}

int func_273(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_280(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_279(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_278(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_277(1);
		}
		func_276();
		func_234();
		func_275();
		func_274();
		return 1;
	}
	return 0;
}

void func_274()
{
	Global_2824944 = 0;
}

void func_275()
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_276()
{
	Global_1641031.f_40.f_9 = 1;
}

void func_277(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8138, false);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8138, false);
	}
}

void func_278(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 20);
	}
}

int func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_280(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_118(sParam3, iParam4, bParam7);
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
	}
	if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (func_283(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_282();
		func_276();
		func_234();
		func_275();
		func_274();
		return 1;
	}
	return 0;
}

void func_282()
{
	Global_22623 = 0;
}

bool func_283(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_118(sParam3, iParam4, bParam8);
}

int func_284(var uParam0, char* sParam1, char* sParam2)
{
	if (func_286(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_285();
		func_234();
		func_275();
		return 1;
	}
	return 0;
}

void func_285()
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_286(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_118(sParam2, iParam3, 0);
}

void func_287()
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_288()
{
	Global_1641031.f_40 = 1;
}

bool func_289()
{
	return Global_1641031.f_40 == 1;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (!func_291(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_291(int iParam0)
{
	if (!func_292())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_293(var uParam0)
{
	if (func_297())
	{
		return 0;
	}
	if (func_296())
	{
		return 0;
	}
	if (func_52(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_295())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_294())
		{
			return 0;
		}
	}
	return 1;
}

bool func_294()
{
	return unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Global_1659413);
}

int func_295()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_296()
{
	return Global_1641031.f_40 == 3;
}

bool func_297()
{
	return func_126();
}

int func_298(int iParam0, int iParam1, int iParam2)
{
	if (!func_296())
	{
		return 0;
	}
	return func_290(iParam0, iParam1, iParam2);
}

int func_299(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x2E87280918B16506(&cVar0);
}

bool func_300()
{
	return Global_2821909.f_1;
}

int func_301()
{
	if (Global_1641219.f_2)
	{
		return 1;
	}
	return func_302();
}

bool func_302()
{
	return func_297();
}

void func_303(int iParam0)
{
	if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == iLocal_1672)
		{
			if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 18))
			{
				if (func_26(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21))
				{
					if (!func_87(&uLocal_1702, 30000, 0))
					{
						if (func_304(iParam0, 1109393408))
						{
							Local_263[iLocal_1672 /*44*/].f_4.f_26 = { 0f, 0f, 0f };
							Local_263[iLocal_1672 /*44*/].f_4.f_29 = 0f;
							func_32(&uLocal_1702);
						}
					}
					else if (!BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_2, 19))
					{
						unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_4.f_2), 19);
					}
				}
			}
		}
	}
}

int func_304(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	if (func_10(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[iParam0 /*23*/].f_2)), 1, 1))
	{
		unk_0xD69A0C3662175E68(Global_2815059.f_837);
		unk_0xD69A0C3662175E68(Global_2815059.f_838);
		if (unk_0x0152AA00FA3130F1(Global_2815059.f_837))
		{
			if (unk_0x0152AA00FA3130F1(Global_2815059.f_838))
			{
				Var3 = { unk_0x6B62510F212526DC(unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Local_68.f_2[iParam0 /*23*/].f_2))), 1) };
				if (!func_323(Var3))
				{
					if (func_198(Var3))
					{
						if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 2)
						{
							iVar7 = 0;
						}
						else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
						{
							iVar7 = 9;
						}
						else
						{
							iVar7 = 1;
						}
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 < 5)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = 9;
					}
					if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 == -1)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
					if (func_319(Var3, &Var0, &uVar6, &(Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34), iVar7, fParam1))
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
						return 1;
					}
					else if (Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 >= 5)
					{
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25++;
						Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = 0;
					}
				}
				else if (func_305(Var3, &Var0, &uVar6))
				{
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_21 = { Var0 };
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_24 = uVar6;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_25 = 0;
					Local_263[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_34 = -1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_305(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (unk_0x5F8653E60ED2288E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -988.9172f, -2428.579f, 19.0608f };
					fVar5 = 148.3473f;
					break;
				
				case 1:
					Var2 = { -968.0948f, -2392.327f, 19.056f };
					fVar5 = 150.0203f;
					break;
				
				case 2:
					Var2 = { -946.4792f, -2419.659f, 19.0562f };
					fVar5 = 91.6004f;
					break;
				
				case 3:
					Var2 = { -899.0128f, -2432.842f, 19.0847f };
					fVar5 = 58.9819f;
					break;
				
				case 4:
					Var2 = { -890.7079f, -2272.402f, 18.2077f };
					fVar5 = 135.9921f;
					break;
			}
			if (func_306(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -996.2861f, -2449.917f, 12.6953f };
					fVar5 = 148.5654f;
					break;
				
				case 1:
					Var2 = { -1006.094f, -2421.448f, 12.9447f };
					fVar5 = 237.9966f;
					break;
				
				case 2:
					Var2 = { -948.7274f, -2403.462f, 12.7341f };
					fVar5 = 111.3975f;
					break;
				
				case 3:
					Var2 = { -895.4352f, -2364.867f, 13.4802f };
					fVar5 = 142.0129f;
					break;
				
				case 4:
					Var2 = { -906.6598f, -2419.59f, 12.6381f };
					fVar5 = 78.0133f;
					break;
			}
			if (func_306(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1084.003f, -2690.473f, 19.0585f };
					fVar5 = 213.4924f;
					break;
				
				case 1:
					Var2 = { -1087.542f, -2660.057f, 19.0615f };
					fVar5 = 191.5389f;
					break;
				
				case 2:
					Var2 = { -1083.4f, -2612.184f, 19.0622f };
					fVar5 = 153.7453f;
					break;
				
				case 3:
					Var2 = { -1059.893f, -2570.656f, 19.061f };
					fVar5 = 150.5092f;
					break;
				
				case 4:
					Var2 = { -1038.387f, -2533.845f, 19.0498f };
					fVar5 = 150.637f;
					break;
			}
			if (func_306(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		iVar1 = 5;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0:
					Var2 = { -1076.408f, -2693.846f, 12.6509f };
					fVar5 = 221.0395f;
					break;
				
				case 1:
					Var2 = { -1121.422f, -2703.146f, 12.9444f };
					fVar5 = 326.1454f;
					break;
				
				case 2:
					Var2 = { -1095.97f, -2644.177f, 12.6382f };
					fVar5 = 182.0544f;
					break;
				
				case 3:
					Var2 = { -1084.046f, -2601.412f, 12.6823f };
					fVar5 = 153.5335f;
					break;
				
				case 4:
					Var2 = { -1049.575f, -2589.945f, 12.6066f };
					fVar5 = 135.7366f;
					break;
			}
			if (func_306(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam3 = { Var2 };
				*uParam4 = fVar5;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_306(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2667225.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAC48FF26FAAA8DD0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam13)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam14 > 0f)
	{
		if (func_313(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_307(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_307(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x987A5F1E1A67E3C0(func_311(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_10(iVar1, 1, 1))
		{
			if (!func_309(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_308(iVar1) || !bParam10) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_311(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam8 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_311(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_309(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_310(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_170();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_312() && Global_1853348[iVar0 /*834*/].f_804) && !func_26(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_216(iParam0);
}

var func_312()
{
	return Global_2714762.f_19;
}

int func_313(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam8 == 0)
		{
			if (func_10(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam7 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_308(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam9) && bParam6) && func_314(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_216(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (func_318(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_317(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2787505))
	{
		return 1;
	}
	if (func_315(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_316(iParam0);
	if (!iVar0 == func_123())
	{
		if (iVar0 == func_316(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_123())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_123();
}

struct<13> func_317(var uParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(uParam0, &Var0, 13);
	return Var0;
}

int func_318(int iParam0, var uParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_317(iParam0) };
		Global_2787518 = { func_317(uParam1) };
		if (unk_0x8C992447292D600F(&Global_2787505))
		{
			if (unk_0x8C992447292D600F(&Global_2787518))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505);
				unk_0x4FFBF2C0D8249E45(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	
	fVar9 = 0f;
	iVar11 = 1;
	if (iParam6 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x15CEDAB46D800682(Param0, *uParam5, &Var0, &fVar9, &uVar10, iParam6, fVar14, fVar15))
		{
			if (unk_0xB7A628320EFF8E47(Param0, Var0) <= (50f * 50f))
			{
				while (!bVar12 && iVar13 < 5)
				{
					if (unk_0xAE32AE15890AA504(&Var0, &Var3, &Var6, 0f, 180f, fParam7, iVar11, 1, 0))
					{
						fVar9 = func_322(0f, 0f, 0f, Var6, 1);
						if (func_320(Param0, Var3, 120f, fParam7))
						{
							if (func_306(*uParam3, 5f, 2f, 1f, 6f, 1, 1, 1, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
							{
								bVar12 = true;
								Var16 = { unk_0x6DB7FBD602C51670(Var3, fVar9, 0f, 1f, 0f) };
								Var19 = { Var16 - Var3 };
								Var22 = { Var0 - Var3 };
								if (unk_0x952F3FA2E7880565(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
								{
									fVar9 = (fVar9 + 180f);
									fVar9 = func_211(fVar9, 0f, 360f);
								}
								*uParam3 = { Var3 };
								*uParam4 = fVar9;
								return 1;
							}
							else
							{
								iVar13++;
							}
						}
						else
						{
							iVar13++;
						}
					}
					else
					{
						iVar13++;
					}
				}
			}
			*uParam5++;
		}
		else
		{
			*uParam5++;
		}
	}
	return 0;
}

int func_320(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = unk_0xB7A628320EFF8E47(Param0, Param3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (unk_0x0318E2EE6FB4563F(Param3, 2.5f))
	{
		return 0;
	}
	if (unk_0x488E34A772939B4C(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_321(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_321(struct<3> Param0, bool bParam3)
{
	if (func_12(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_204(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_205(2, Param0))
	{
		if (func_204(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(3, Param0))
	{
		if (func_204(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(4, Param0))
	{
		if (func_204(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(5, Param0))
	{
		if (func_204(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_205(6, Param0))
	{
		if (func_204(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_201())
	{
		if (func_205(7, Param0))
		{
			if (func_204(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_205(8, Param0))
	{
		if (func_204(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x5F8653E60ED2288E(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (unk_0x5F8653E60ED2288E(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0, 1))
	{
		return 1;
	}
	if (unk_0x5F8653E60ED2288E(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (unk_0x5F8653E60ED2288E(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((unk_0x5F8653E60ED2288E(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1)) || unk_0x5F8653E60ED2288E(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1)) || unk_0x5F8653E60ED2288E(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (func_12(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x5F8653E60ED2288E(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x5F8653E60ED2288E(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x5F8653E60ED2288E(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x5F8653E60ED2288E(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (unk_0x5F8653E60ED2288E(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0, 1))
		{
			return 1;
		}
		if (unk_0x5F8653E60ED2288E(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

float func_322(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xC529D13129C03CF4(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_323(struct<3> Param0)
{
	if (unk_0x5F8653E60ED2288E(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
	{
		return 1;
	}
	else if (unk_0x5F8653E60ED2288E(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1) || unk_0x5F8653E60ED2288E(Param0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0, 1))
	{
		return 1;
	}
	return 0;
}

void func_324()
{
	bool bVar0;
	
	if (Local_263[iLocal_1672 /*44*/].f_4.f_3 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 8)
	{
		if (BitTest(Local_263[iLocal_1672 /*44*/].f_4.f_3, bVar0))
		{
			if ((Local_68.f_2[bVar0 /*23*/].f_7 == 11 || Local_68.f_2[bVar0 /*23*/].f_7 == 9) || Local_68.f_2[bVar0 /*23*/].f_7 == 10)
			{
				unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bVar0);
			}
			else if (!unk_0xCCDCD6672DAE6835(Local_68.f_2[bVar0 /*23*/].f_1))
			{
				unk_0xB0550BC91B0159D6(&(Local_263[iLocal_1672 /*44*/].f_4.f_3), bVar0);
			}
		}
		bVar0++;
	}
}

void func_325()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != iLocal_1672)
			{
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/]))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/]))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/], 1);
					}
				}
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/].f_1, 1);
					}
				}
			}
		}
		else if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_2 == iLocal_1672)
			{
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/]))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/]))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/], 0);
					}
					else if (unk_0xC31EECA11005273C(Local_68.f_2[iVar0 /*23*/]))
					{
					}
				}
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/].f_1, 0);
					}
				}
			}
			else
			{
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/]))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/]))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/], 1);
					}
				}
				if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/].f_1, 1);
					}
				}
			}
		}
		else
		{
			if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/]))
			{
				if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/]))
				{
					unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/], 1);
				}
			}
			if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/].f_1))
			{
				if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/].f_1, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_326()
{
	switch (Local_263[iLocal_1672 /*44*/].f_43)
	{
		case 0:
			if (Local_68.f_191 > 0)
			{
				Local_263[iLocal_1672 /*44*/].f_43 = 1;
			}
			break;
		
		case 1:
			func_337();
			func_327();
			if (Local_68.f_191 >= 4)
			{
				Local_263[iLocal_1672 /*44*/].f_43 = 4;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			func_364();
			break;
	}
}

void func_327()
{
	int iVar0;
	
	iVar0 = unk_0xBD7B8099C8298D2F(false, 0);
	if (Local_68.f_189 != iVar0)
	{
		if (Local_68.f_189 < iVar0 || func_328(Local_68.f_189, Local_68.f_189, Local_68.f_189, 0, 1))
		{
			unk_0xC1F83F3B5F8E7D3B(Local_68.f_189);
			unk_0xF8B8A6EDAA31F196(Local_68.f_189);
			unk_0x6F2E4667A6039155(Local_68.f_189);
		}
	}
}

int func_328(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_336(iParam0, bParam3, bParam4) && func_335(iParam1, bParam3, bParam4)) && func_329(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(2, iParam0, 1, bParam1, bParam2);
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_334(iParam0) - func_333(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_333(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_334(iParam0) - func_332(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_333(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_334(iParam0) - func_333(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_331(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_333(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(1, iParam0, 1, bParam1, bParam2);
}

int func_336(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(0, iParam0, 1, bParam1, bParam2);
}

void func_337()
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_1701)
	{
		case 0:
			if (func_351(131))
			{
				iVar0 = func_341();
				if (iVar0 == 0)
				{
					func_20(&uLocal_2622, 7, 0, "TaxiDispatch", 0, 1);
					if (func_340(&uLocal_2622, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, 0))
					{
						iLocal_1701 = 1;
					}
				}
				else if (iVar0 == 9)
				{
				}
				else
				{
					StringCopy(&Var1, "MPTXI_N", 16);
					StringIntConCat(&Var1, iVar0, 16);
					func_20(&uLocal_2622, 7, 0, "TaxiDispatch", 0, 1);
					if (func_340(&uLocal_2622, 131, "MPTXIAU", &Var1, 12, 1, 0, 0, 0))
					{
					}
				}
			}
			else if (BitTest(Global_2815059.f_836, 0))
			{
				if (func_341() == 0)
				{
					if (!func_26(Local_263[iLocal_1672 /*44*/].f_4.f_21))
					{
						Local_263[iLocal_1672 /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[iLocal_1672 /*44*/].f_4.f_24 = 0f;
					}
					unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_1), false);
					iLocal_1701 = 2;
				}
				unk_0xB0550BC91B0159D6(&(Global_2815059.f_836), false);
			}
			break;
		
		case 1:
			if (func_339())
			{
				if (!func_338())
				{
					if (!func_26(Local_263[iLocal_1672 /*44*/].f_4.f_21))
					{
						Local_263[iLocal_1672 /*44*/].f_4.f_21 = { 0f, 0f, 0f };
						Local_263[iLocal_1672 /*44*/].f_4.f_24 = 0f;
					}
					unk_0xCED9E32812D6C7C7(&(Local_263[iLocal_1672 /*44*/].f_1), false);
					iLocal_1701 = 2;
				}
				else
				{
					iLocal_1701 = 0;
				}
			}
			break;
		
		case 2:
			if (!BitTest(Local_263[iLocal_1672 /*44*/].f_1, 0))
			{
				iLocal_1701 = 0;
			}
			break;
	}
}

int func_338()
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

int func_339()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_340(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 1;
	return func_118(sParam3, iParam4, bParam8);
}

int func_341()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!BitTest(Global_2815059.f_836, 0))
	{
		if (IntToFloat(func_172(unk_0x9E2D6C50374FCFA9())) <= (IntToFloat(iLocal_1879) * 1.5f))
		{
			if (!unk_0xF847447D4467709D())
			{
				func_175("TXM_H03", -1);
			}
			return 9;
		}
		if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return 2;
		}
	}
	if (!func_31())
	{
		return 1;
	}
	if (func_350(iLocal_1672))
	{
		return 9;
	}
	uVar0 = unk_0x407E03586628E458(unk_0x6B01934FA503547F(unk_0x74BD5C0C45A40771()));
	if (!unk_0xF68107C40359970C(uVar0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
		{
			uVar1 = unk_0xB3FF0049C1FD38EC(iVar0, 0);
			if (unk_0x55A0C756C4A8220C(uVar1, 0))
			{
				if (unk_0x7010991FDA59D3F2(iVar1, joaat("taxi")))
				{
					return 9;
				}
			}
		}
	}
	if (func_349(iLocal_1672))
	{
		return 4;
	}
	if (Local_263[iLocal_1672 /*44*/].f_4 != -1)
	{
		return 4;
	}
	if (BitTest(Local_263[iLocal_1672 /*44*/].f_1, 0))
	{
		return 4;
	}
	if (func_181(unk_0x9E2D6C50374FCFA9(), 1, 0) && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 16)
	{
		return 1;
	}
	if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) >= 6f)
	{
		return 9;
	}
	if (func_348(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		return 9;
	}
	if (func_347(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 9;
	}
	if (func_346())
	{
		return 3;
	}
	if (!func_342(1, 1, 1, 1, 0))
	{
		return 1;
	}
	Var2 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	fVar8 = 50f;
	iVar9 = 1;
	if (!func_198(Var2))
	{
		iVar9 = 9;
	}
	if (!unk_0xDFCBBD9528DC1828(Var2, &Var5, iVar9, 100f, 2.5f))
	{
		return 3;
	}
	if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Var5, fVar8, fVar8, 20f, 0, 1, 0))
	{
		return 3;
	}
	if (func_321(Var2, 1))
	{
		return 3;
	}
	return 0;
}

int func_342(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_345(iParam0, bParam3, bParam4) || func_344(iParam1, bParam3, bParam4)) || func_343(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(2, iParam0, 0, bParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(1, iParam0, 0, bParam1, bParam2);
}

int func_345(int iParam0, bool bParam1, bool bParam2)
{
	return func_330(0, iParam0, 0, bParam1, bParam2);
}

int func_346()
{
	if (func_10(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (unk_0xB950B5D01E8A4868(unk_0xE2D3D51028F0428A(), -64f, -850f, 200f, -84f, -795f, 340f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_347(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_348(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_123())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_2 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != -1)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_352()
{
	return Local_68.f_0;
}

int func_353(int iParam0)
{
	return Local_263[iParam0 /*44*/];
}

bool func_354()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_139, 18);
}

int func_355()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_362())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_361())
	{
		return 1;
	}
	if (func_360(159))
	{
		if (!func_359())
		{
			return 1;
		}
	}
	if (func_360(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_356() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_356()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_356()
{
	switch (func_358())
	{
		case 0:
			return func_357();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_357()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_358()
{
	return Global_31959;
}

bool func_359()
{
	return Global_2714762.f_698;
}

int func_360(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_361()
{
	return Global_2725403;
}

bool func_362()
{
	return Global_2714762.f_693;
}

void func_363()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_364()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/]))
		{
			if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/]))
			{
				unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/], 1);
			}
		}
		if (unk_0xCCDCD6672DAE6835(Local_68.f_2[iVar0 /*23*/].f_1))
		{
			if (unk_0x07B2F8356DC13CF4(Local_68.f_2[iVar0 /*23*/].f_1))
			{
				unk_0xBEA5F528349F8F75(Local_68.f_2[iVar0 /*23*/].f_1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x876B1078E90C91CB(uLocal_2601))
	{
		if (unk_0xA24FDA4986456697(uLocal_2601))
		{
			func_40();
		}
	}
	if (bLocal_1875)
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1712))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_1712);
		unk_0xF1A23B343DFEDFD0(iLocal_1713);
	}
	if (unk_0xBB75DCB31B62483C("taxi"))
	{
		unk_0xEFD883943E59207A("taxi");
	}
	func_365();
}

void func_365()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_366(struct<21> Param0)
{
	func_376(32, Param0);
	func_374(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_68, 195, 0);
	unk_0x7157B1051528D729(&Local_263, 1409, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_373())
	{
		return 0;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		func_367(131, 3, BitTest(Global_2815059.f_836, 4));
		func_37(&uLocal_1704, 0, 0);
		Local_263[iLocal_1672 /*44*/] = 0;
	}
	return 1;
}

void func_367(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_128();
		if (iParam1 == 4)
		{
			func_372(iParam0, 0, 1);
			func_372(iParam0, 1, 1);
			func_372(iParam0, 2, 1);
			func_371(iParam0, 0, 1);
			func_371(iParam0, 1, 1);
			func_371(iParam0, 2, 1);
		}
		else
		{
			if (func_370(iParam0, iParam1) == 1 && func_369(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_372(iParam0, iVar0, 1);
			func_371(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_264(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_264(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_368();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_264(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_368();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_264(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_368();
			}
		}
	}
}

void func_368()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xAEF70623D03F7B02(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		unk_0x150D8F58B26E9F70("");
		StringCopy(&cVar16, unk_0xAEF70623D03F7B02(&(Global_8746[1 /*6*/])), 64);
		sVar32 = unk_0xAEF70623D03F7B02("CELL_253");
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x150D8F58B26E9F70("CELL_255");
		unk_0x26C23BE14F66F202(&(Global_8746[1 /*6*/]));
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xB0550BC91B0159D6(&Global_8136, false);
}

int func_369(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_370(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_371(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_373()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_362())
		{
			return 0;
		}
		if (func_360(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_374(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_365();
			}
			else
			{
				return 0;
			}
		}
		if (!func_375(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_362())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_360(157))
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_365();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_365();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_365();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_375(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_376(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_365();
	}
	unk_0xD9B114A8D3A8319F(iParam0, 0, Param1.f_16);
}

