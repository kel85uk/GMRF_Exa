CXX = mpicxx
CFLAGS = -O3 -march=native -DNDEBUG -std=c++11 
LFLAGS = -O3 -march=native -DNDEBUG -std=c++11 
BINARY = exastencils

.PHONY: all
all: exastencils

.PHONY: clean
clean:
	rm -f Domains/DomainGenerated_0.o Globals/Globals_0.o Globals/Globals_1.o Globals/Globals_2.o Globals/Globals_3.o MultiGrid/MultiGrid_0.o MultiGrid/MultiGrid_1.o MultiGrid/MultiGrid_10.o MultiGrid/MultiGrid_100.o MultiGrid/MultiGrid_101.o MultiGrid/MultiGrid_102.o MultiGrid/MultiGrid_103.o MultiGrid/MultiGrid_104.o MultiGrid/MultiGrid_105.o MultiGrid/MultiGrid_106.o MultiGrid/MultiGrid_107.o MultiGrid/MultiGrid_108.o MultiGrid/MultiGrid_109.o MultiGrid/MultiGrid_11.o MultiGrid/MultiGrid_110.o MultiGrid/MultiGrid_111.o MultiGrid/MultiGrid_112.o MultiGrid/MultiGrid_113.o MultiGrid/MultiGrid_114.o MultiGrid/MultiGrid_115.o MultiGrid/MultiGrid_116.o MultiGrid/MultiGrid_117.o MultiGrid/MultiGrid_118.o MultiGrid/MultiGrid_119.o MultiGrid/MultiGrid_12.o MultiGrid/MultiGrid_120.o MultiGrid/MultiGrid_121.o MultiGrid/MultiGrid_122.o MultiGrid/MultiGrid_123.o MultiGrid/MultiGrid_124.o MultiGrid/MultiGrid_125.o MultiGrid/MultiGrid_126.o MultiGrid/MultiGrid_127.o MultiGrid/MultiGrid_128.o MultiGrid/MultiGrid_129.o MultiGrid/MultiGrid_13.o MultiGrid/MultiGrid_130.o MultiGrid/MultiGrid_131.o MultiGrid/MultiGrid_132.o MultiGrid/MultiGrid_133.o MultiGrid/MultiGrid_134.o MultiGrid/MultiGrid_14.o MultiGrid/MultiGrid_15.o MultiGrid/MultiGrid_16.o MultiGrid/MultiGrid_17.o MultiGrid/MultiGrid_18.o MultiGrid/MultiGrid_19.o MultiGrid/MultiGrid_2.o MultiGrid/MultiGrid_20.o MultiGrid/MultiGrid_21.o MultiGrid/MultiGrid_22.o MultiGrid/MultiGrid_23.o MultiGrid/MultiGrid_24.o MultiGrid/MultiGrid_25.o MultiGrid/MultiGrid_26.o MultiGrid/MultiGrid_27.o MultiGrid/MultiGrid_28.o MultiGrid/MultiGrid_29.o MultiGrid/MultiGrid_3.o MultiGrid/MultiGrid_30.o MultiGrid/MultiGrid_31.o MultiGrid/MultiGrid_32.o MultiGrid/MultiGrid_33.o MultiGrid/MultiGrid_34.o MultiGrid/MultiGrid_35.o MultiGrid/MultiGrid_36.o MultiGrid/MultiGrid_37.o MultiGrid/MultiGrid_38.o MultiGrid/MultiGrid_39.o MultiGrid/MultiGrid_4.o MultiGrid/MultiGrid_40.o MultiGrid/MultiGrid_41.o MultiGrid/MultiGrid_42.o MultiGrid/MultiGrid_43.o MultiGrid/MultiGrid_44.o MultiGrid/MultiGrid_45.o MultiGrid/MultiGrid_46.o MultiGrid/MultiGrid_47.o MultiGrid/MultiGrid_48.o MultiGrid/MultiGrid_49.o MultiGrid/MultiGrid_5.o MultiGrid/MultiGrid_50.o MultiGrid/MultiGrid_51.o MultiGrid/MultiGrid_52.o MultiGrid/MultiGrid_53.o MultiGrid/MultiGrid_54.o MultiGrid/MultiGrid_55.o MultiGrid/MultiGrid_56.o MultiGrid/MultiGrid_57.o MultiGrid/MultiGrid_58.o MultiGrid/MultiGrid_59.o MultiGrid/MultiGrid_6.o MultiGrid/MultiGrid_60.o MultiGrid/MultiGrid_61.o MultiGrid/MultiGrid_62.o MultiGrid/MultiGrid_63.o MultiGrid/MultiGrid_64.o MultiGrid/MultiGrid_65.o MultiGrid/MultiGrid_66.o MultiGrid/MultiGrid_67.o MultiGrid/MultiGrid_68.o MultiGrid/MultiGrid_69.o MultiGrid/MultiGrid_7.o MultiGrid/MultiGrid_70.o MultiGrid/MultiGrid_71.o MultiGrid/MultiGrid_72.o MultiGrid/MultiGrid_73.o MultiGrid/MultiGrid_74.o MultiGrid/MultiGrid_75.o MultiGrid/MultiGrid_76.o MultiGrid/MultiGrid_77.o MultiGrid/MultiGrid_78.o MultiGrid/MultiGrid_79.o MultiGrid/MultiGrid_8.o MultiGrid/MultiGrid_80.o MultiGrid/MultiGrid_81.o MultiGrid/MultiGrid_82.o MultiGrid/MultiGrid_83.o MultiGrid/MultiGrid_84.o MultiGrid/MultiGrid_85.o MultiGrid/MultiGrid_86.o MultiGrid/MultiGrid_87.o MultiGrid/MultiGrid_88.o MultiGrid/MultiGrid_89.o MultiGrid/MultiGrid_9.o MultiGrid/MultiGrid_90.o MultiGrid/MultiGrid_91.o MultiGrid/MultiGrid_92.o MultiGrid/MultiGrid_93.o MultiGrid/MultiGrid_94.o MultiGrid/MultiGrid_95.o MultiGrid/MultiGrid_96.o MultiGrid/MultiGrid_97.o MultiGrid/MultiGrid_98.o MultiGrid/MultiGrid_99.o Primitives/CommunicationFunctions_0.o Primitives/CommunicationFunctions_1.o Primitives/CommunicationFunctions_10.o Primitives/CommunicationFunctions_11.o Primitives/CommunicationFunctions_12.o Primitives/CommunicationFunctions_13.o Primitives/CommunicationFunctions_14.o Primitives/CommunicationFunctions_15.o Primitives/CommunicationFunctions_16.o Primitives/CommunicationFunctions_17.o Primitives/CommunicationFunctions_18.o Primitives/CommunicationFunctions_19.o Primitives/CommunicationFunctions_2.o Primitives/CommunicationFunctions_20.o Primitives/CommunicationFunctions_21.o Primitives/CommunicationFunctions_22.o Primitives/CommunicationFunctions_23.o Primitives/CommunicationFunctions_24.o Primitives/CommunicationFunctions_25.o Primitives/CommunicationFunctions_26.o Primitives/CommunicationFunctions_27.o Primitives/CommunicationFunctions_28.o Primitives/CommunicationFunctions_29.o Primitives/CommunicationFunctions_3.o Primitives/CommunicationFunctions_30.o Primitives/CommunicationFunctions_31.o Primitives/CommunicationFunctions_32.o Primitives/CommunicationFunctions_33.o Primitives/CommunicationFunctions_34.o Primitives/CommunicationFunctions_35.o Primitives/CommunicationFunctions_36.o Primitives/CommunicationFunctions_37.o Primitives/CommunicationFunctions_38.o Primitives/CommunicationFunctions_39.o Primitives/CommunicationFunctions_4.o Primitives/CommunicationFunctions_40.o Primitives/CommunicationFunctions_41.o Primitives/CommunicationFunctions_42.o Primitives/CommunicationFunctions_43.o Primitives/CommunicationFunctions_44.o Primitives/CommunicationFunctions_45.o Primitives/CommunicationFunctions_46.o Primitives/CommunicationFunctions_47.o Primitives/CommunicationFunctions_48.o Primitives/CommunicationFunctions_49.o Primitives/CommunicationFunctions_5.o Primitives/CommunicationFunctions_50.o Primitives/CommunicationFunctions_51.o Primitives/CommunicationFunctions_52.o Primitives/CommunicationFunctions_53.o Primitives/CommunicationFunctions_54.o Primitives/CommunicationFunctions_55.o Primitives/CommunicationFunctions_56.o Primitives/CommunicationFunctions_57.o Primitives/CommunicationFunctions_58.o Primitives/CommunicationFunctions_59.o Primitives/CommunicationFunctions_6.o Primitives/CommunicationFunctions_60.o Primitives/CommunicationFunctions_61.o Primitives/CommunicationFunctions_62.o Primitives/CommunicationFunctions_63.o Primitives/CommunicationFunctions_64.o Primitives/CommunicationFunctions_65.o Primitives/CommunicationFunctions_66.o Primitives/CommunicationFunctions_67.o Primitives/CommunicationFunctions_68.o Primitives/CommunicationFunctions_69.o Primitives/CommunicationFunctions_7.o Primitives/CommunicationFunctions_70.o Primitives/CommunicationFunctions_71.o Primitives/CommunicationFunctions_72.o Primitives/CommunicationFunctions_73.o Primitives/CommunicationFunctions_74.o Primitives/CommunicationFunctions_75.o Primitives/CommunicationFunctions_76.o Primitives/CommunicationFunctions_77.o Primitives/CommunicationFunctions_78.o Primitives/CommunicationFunctions_79.o Primitives/CommunicationFunctions_8.o Primitives/CommunicationFunctions_80.o Primitives/CommunicationFunctions_81.o Primitives/CommunicationFunctions_82.o Primitives/CommunicationFunctions_83.o Primitives/CommunicationFunctions_84.o Primitives/CommunicationFunctions_85.o Primitives/CommunicationFunctions_86.o Primitives/CommunicationFunctions_9.o Util/Gamma.o ${BINARY}

exastencils: Domains/DomainGenerated_0.o Globals/Globals_0.o Globals/Globals_1.o Globals/Globals_2.o Globals/Globals_3.o MultiGrid/MultiGrid_0.o MultiGrid/MultiGrid_1.o MultiGrid/MultiGrid_10.o MultiGrid/MultiGrid_100.o MultiGrid/MultiGrid_101.o MultiGrid/MultiGrid_102.o MultiGrid/MultiGrid_103.o MultiGrid/MultiGrid_104.o MultiGrid/MultiGrid_105.o MultiGrid/MultiGrid_106.o MultiGrid/MultiGrid_107.o MultiGrid/MultiGrid_108.o MultiGrid/MultiGrid_109.o MultiGrid/MultiGrid_11.o MultiGrid/MultiGrid_110.o MultiGrid/MultiGrid_111.o MultiGrid/MultiGrid_112.o MultiGrid/MultiGrid_113.o MultiGrid/MultiGrid_114.o MultiGrid/MultiGrid_115.o MultiGrid/MultiGrid_116.o MultiGrid/MultiGrid_117.o MultiGrid/MultiGrid_118.o MultiGrid/MultiGrid_119.o MultiGrid/MultiGrid_12.o MultiGrid/MultiGrid_120.o MultiGrid/MultiGrid_121.o MultiGrid/MultiGrid_122.o MultiGrid/MultiGrid_123.o MultiGrid/MultiGrid_124.o MultiGrid/MultiGrid_125.o MultiGrid/MultiGrid_126.o MultiGrid/MultiGrid_127.o MultiGrid/MultiGrid_128.o MultiGrid/MultiGrid_129.o MultiGrid/MultiGrid_13.o MultiGrid/MultiGrid_130.o MultiGrid/MultiGrid_131.o MultiGrid/MultiGrid_132.o MultiGrid/MultiGrid_133.o MultiGrid/MultiGrid_134.o MultiGrid/MultiGrid_14.o MultiGrid/MultiGrid_15.o MultiGrid/MultiGrid_16.o MultiGrid/MultiGrid_17.o MultiGrid/MultiGrid_18.o MultiGrid/MultiGrid_19.o MultiGrid/MultiGrid_2.o MultiGrid/MultiGrid_20.o MultiGrid/MultiGrid_21.o MultiGrid/MultiGrid_22.o MultiGrid/MultiGrid_23.o MultiGrid/MultiGrid_24.o MultiGrid/MultiGrid_25.o MultiGrid/MultiGrid_26.o MultiGrid/MultiGrid_27.o MultiGrid/MultiGrid_28.o MultiGrid/MultiGrid_29.o MultiGrid/MultiGrid_3.o MultiGrid/MultiGrid_30.o MultiGrid/MultiGrid_31.o MultiGrid/MultiGrid_32.o MultiGrid/MultiGrid_33.o MultiGrid/MultiGrid_34.o MultiGrid/MultiGrid_35.o MultiGrid/MultiGrid_36.o MultiGrid/MultiGrid_37.o MultiGrid/MultiGrid_38.o MultiGrid/MultiGrid_39.o MultiGrid/MultiGrid_4.o MultiGrid/MultiGrid_40.o MultiGrid/MultiGrid_41.o MultiGrid/MultiGrid_42.o MultiGrid/MultiGrid_43.o MultiGrid/MultiGrid_44.o MultiGrid/MultiGrid_45.o MultiGrid/MultiGrid_46.o MultiGrid/MultiGrid_47.o MultiGrid/MultiGrid_48.o MultiGrid/MultiGrid_49.o MultiGrid/MultiGrid_5.o MultiGrid/MultiGrid_50.o MultiGrid/MultiGrid_51.o MultiGrid/MultiGrid_52.o MultiGrid/MultiGrid_53.o MultiGrid/MultiGrid_54.o MultiGrid/MultiGrid_55.o MultiGrid/MultiGrid_56.o MultiGrid/MultiGrid_57.o MultiGrid/MultiGrid_58.o MultiGrid/MultiGrid_59.o MultiGrid/MultiGrid_6.o MultiGrid/MultiGrid_60.o MultiGrid/MultiGrid_61.o MultiGrid/MultiGrid_62.o MultiGrid/MultiGrid_63.o MultiGrid/MultiGrid_64.o MultiGrid/MultiGrid_65.o MultiGrid/MultiGrid_66.o MultiGrid/MultiGrid_67.o MultiGrid/MultiGrid_68.o MultiGrid/MultiGrid_69.o MultiGrid/MultiGrid_7.o MultiGrid/MultiGrid_70.o MultiGrid/MultiGrid_71.o MultiGrid/MultiGrid_72.o MultiGrid/MultiGrid_73.o MultiGrid/MultiGrid_74.o MultiGrid/MultiGrid_75.o MultiGrid/MultiGrid_76.o MultiGrid/MultiGrid_77.o MultiGrid/MultiGrid_78.o MultiGrid/MultiGrid_79.o MultiGrid/MultiGrid_8.o MultiGrid/MultiGrid_80.o MultiGrid/MultiGrid_81.o MultiGrid/MultiGrid_82.o MultiGrid/MultiGrid_83.o MultiGrid/MultiGrid_84.o MultiGrid/MultiGrid_85.o MultiGrid/MultiGrid_86.o MultiGrid/MultiGrid_87.o MultiGrid/MultiGrid_88.o MultiGrid/MultiGrid_89.o MultiGrid/MultiGrid_9.o MultiGrid/MultiGrid_90.o MultiGrid/MultiGrid_91.o MultiGrid/MultiGrid_92.o MultiGrid/MultiGrid_93.o MultiGrid/MultiGrid_94.o MultiGrid/MultiGrid_95.o MultiGrid/MultiGrid_96.o MultiGrid/MultiGrid_97.o MultiGrid/MultiGrid_98.o MultiGrid/MultiGrid_99.o Primitives/CommunicationFunctions_0.o Primitives/CommunicationFunctions_1.o Primitives/CommunicationFunctions_10.o Primitives/CommunicationFunctions_11.o Primitives/CommunicationFunctions_12.o Primitives/CommunicationFunctions_13.o Primitives/CommunicationFunctions_14.o Primitives/CommunicationFunctions_15.o Primitives/CommunicationFunctions_16.o Primitives/CommunicationFunctions_17.o Primitives/CommunicationFunctions_18.o Primitives/CommunicationFunctions_19.o Primitives/CommunicationFunctions_2.o Primitives/CommunicationFunctions_20.o Primitives/CommunicationFunctions_21.o Primitives/CommunicationFunctions_22.o Primitives/CommunicationFunctions_23.o Primitives/CommunicationFunctions_24.o Primitives/CommunicationFunctions_25.o Primitives/CommunicationFunctions_26.o Primitives/CommunicationFunctions_27.o Primitives/CommunicationFunctions_28.o Primitives/CommunicationFunctions_29.o Primitives/CommunicationFunctions_3.o Primitives/CommunicationFunctions_30.o Primitives/CommunicationFunctions_31.o Primitives/CommunicationFunctions_32.o Primitives/CommunicationFunctions_33.o Primitives/CommunicationFunctions_34.o Primitives/CommunicationFunctions_35.o Primitives/CommunicationFunctions_36.o Primitives/CommunicationFunctions_37.o Primitives/CommunicationFunctions_38.o Primitives/CommunicationFunctions_39.o Primitives/CommunicationFunctions_4.o Primitives/CommunicationFunctions_40.o Primitives/CommunicationFunctions_41.o Primitives/CommunicationFunctions_42.o Primitives/CommunicationFunctions_43.o Primitives/CommunicationFunctions_44.o Primitives/CommunicationFunctions_45.o Primitives/CommunicationFunctions_46.o Primitives/CommunicationFunctions_47.o Primitives/CommunicationFunctions_48.o Primitives/CommunicationFunctions_49.o Primitives/CommunicationFunctions_5.o Primitives/CommunicationFunctions_50.o Primitives/CommunicationFunctions_51.o Primitives/CommunicationFunctions_52.o Primitives/CommunicationFunctions_53.o Primitives/CommunicationFunctions_54.o Primitives/CommunicationFunctions_55.o Primitives/CommunicationFunctions_56.o Primitives/CommunicationFunctions_57.o Primitives/CommunicationFunctions_58.o Primitives/CommunicationFunctions_59.o Primitives/CommunicationFunctions_6.o Primitives/CommunicationFunctions_60.o Primitives/CommunicationFunctions_61.o Primitives/CommunicationFunctions_62.o Primitives/CommunicationFunctions_63.o Primitives/CommunicationFunctions_64.o Primitives/CommunicationFunctions_65.o Primitives/CommunicationFunctions_66.o Primitives/CommunicationFunctions_67.o Primitives/CommunicationFunctions_68.o Primitives/CommunicationFunctions_69.o Primitives/CommunicationFunctions_7.o Primitives/CommunicationFunctions_70.o Primitives/CommunicationFunctions_71.o Primitives/CommunicationFunctions_72.o Primitives/CommunicationFunctions_73.o Primitives/CommunicationFunctions_74.o Primitives/CommunicationFunctions_75.o Primitives/CommunicationFunctions_76.o Primitives/CommunicationFunctions_77.o Primitives/CommunicationFunctions_78.o Primitives/CommunicationFunctions_79.o Primitives/CommunicationFunctions_8.o Primitives/CommunicationFunctions_80.o Primitives/CommunicationFunctions_81.o Primitives/CommunicationFunctions_82.o Primitives/CommunicationFunctions_83.o Primitives/CommunicationFunctions_84.o Primitives/CommunicationFunctions_85.o Primitives/CommunicationFunctions_86.o Primitives/CommunicationFunctions_9.o Util/Gamma.o 
	${CXX} ${LFLAGS} -o ${BINARY} -I. Domains/DomainGenerated_0.o Globals/Globals_0.o Globals/Globals_1.o Globals/Globals_2.o Globals/Globals_3.o MultiGrid/MultiGrid_0.o MultiGrid/MultiGrid_1.o MultiGrid/MultiGrid_10.o MultiGrid/MultiGrid_100.o MultiGrid/MultiGrid_101.o MultiGrid/MultiGrid_102.o MultiGrid/MultiGrid_103.o MultiGrid/MultiGrid_104.o MultiGrid/MultiGrid_105.o MultiGrid/MultiGrid_106.o MultiGrid/MultiGrid_107.o MultiGrid/MultiGrid_108.o MultiGrid/MultiGrid_109.o MultiGrid/MultiGrid_11.o MultiGrid/MultiGrid_110.o MultiGrid/MultiGrid_111.o MultiGrid/MultiGrid_112.o MultiGrid/MultiGrid_113.o MultiGrid/MultiGrid_114.o MultiGrid/MultiGrid_115.o MultiGrid/MultiGrid_116.o MultiGrid/MultiGrid_117.o MultiGrid/MultiGrid_118.o MultiGrid/MultiGrid_119.o MultiGrid/MultiGrid_12.o MultiGrid/MultiGrid_120.o MultiGrid/MultiGrid_121.o MultiGrid/MultiGrid_122.o MultiGrid/MultiGrid_123.o MultiGrid/MultiGrid_124.o MultiGrid/MultiGrid_125.o MultiGrid/MultiGrid_126.o MultiGrid/MultiGrid_127.o MultiGrid/MultiGrid_128.o MultiGrid/MultiGrid_129.o MultiGrid/MultiGrid_13.o MultiGrid/MultiGrid_130.o MultiGrid/MultiGrid_131.o MultiGrid/MultiGrid_132.o MultiGrid/MultiGrid_133.o MultiGrid/MultiGrid_134.o MultiGrid/MultiGrid_14.o MultiGrid/MultiGrid_15.o MultiGrid/MultiGrid_16.o MultiGrid/MultiGrid_17.o MultiGrid/MultiGrid_18.o MultiGrid/MultiGrid_19.o MultiGrid/MultiGrid_2.o MultiGrid/MultiGrid_20.o MultiGrid/MultiGrid_21.o MultiGrid/MultiGrid_22.o MultiGrid/MultiGrid_23.o MultiGrid/MultiGrid_24.o MultiGrid/MultiGrid_25.o MultiGrid/MultiGrid_26.o MultiGrid/MultiGrid_27.o MultiGrid/MultiGrid_28.o MultiGrid/MultiGrid_29.o MultiGrid/MultiGrid_3.o MultiGrid/MultiGrid_30.o MultiGrid/MultiGrid_31.o MultiGrid/MultiGrid_32.o MultiGrid/MultiGrid_33.o MultiGrid/MultiGrid_34.o MultiGrid/MultiGrid_35.o MultiGrid/MultiGrid_36.o MultiGrid/MultiGrid_37.o MultiGrid/MultiGrid_38.o MultiGrid/MultiGrid_39.o MultiGrid/MultiGrid_4.o MultiGrid/MultiGrid_40.o MultiGrid/MultiGrid_41.o MultiGrid/MultiGrid_42.o MultiGrid/MultiGrid_43.o MultiGrid/MultiGrid_44.o MultiGrid/MultiGrid_45.o MultiGrid/MultiGrid_46.o MultiGrid/MultiGrid_47.o MultiGrid/MultiGrid_48.o MultiGrid/MultiGrid_49.o MultiGrid/MultiGrid_5.o MultiGrid/MultiGrid_50.o MultiGrid/MultiGrid_51.o MultiGrid/MultiGrid_52.o MultiGrid/MultiGrid_53.o MultiGrid/MultiGrid_54.o MultiGrid/MultiGrid_55.o MultiGrid/MultiGrid_56.o MultiGrid/MultiGrid_57.o MultiGrid/MultiGrid_58.o MultiGrid/MultiGrid_59.o MultiGrid/MultiGrid_6.o MultiGrid/MultiGrid_60.o MultiGrid/MultiGrid_61.o MultiGrid/MultiGrid_62.o MultiGrid/MultiGrid_63.o MultiGrid/MultiGrid_64.o MultiGrid/MultiGrid_65.o MultiGrid/MultiGrid_66.o MultiGrid/MultiGrid_67.o MultiGrid/MultiGrid_68.o MultiGrid/MultiGrid_69.o MultiGrid/MultiGrid_7.o MultiGrid/MultiGrid_70.o MultiGrid/MultiGrid_71.o MultiGrid/MultiGrid_72.o MultiGrid/MultiGrid_73.o MultiGrid/MultiGrid_74.o MultiGrid/MultiGrid_75.o MultiGrid/MultiGrid_76.o MultiGrid/MultiGrid_77.o MultiGrid/MultiGrid_78.o MultiGrid/MultiGrid_79.o MultiGrid/MultiGrid_8.o MultiGrid/MultiGrid_80.o MultiGrid/MultiGrid_81.o MultiGrid/MultiGrid_82.o MultiGrid/MultiGrid_83.o MultiGrid/MultiGrid_84.o MultiGrid/MultiGrid_85.o MultiGrid/MultiGrid_86.o MultiGrid/MultiGrid_87.o MultiGrid/MultiGrid_88.o MultiGrid/MultiGrid_89.o MultiGrid/MultiGrid_9.o MultiGrid/MultiGrid_90.o MultiGrid/MultiGrid_91.o MultiGrid/MultiGrid_92.o MultiGrid/MultiGrid_93.o MultiGrid/MultiGrid_94.o MultiGrid/MultiGrid_95.o MultiGrid/MultiGrid_96.o MultiGrid/MultiGrid_97.o MultiGrid/MultiGrid_98.o MultiGrid/MultiGrid_99.o Primitives/CommunicationFunctions_0.o Primitives/CommunicationFunctions_1.o Primitives/CommunicationFunctions_10.o Primitives/CommunicationFunctions_11.o Primitives/CommunicationFunctions_12.o Primitives/CommunicationFunctions_13.o Primitives/CommunicationFunctions_14.o Primitives/CommunicationFunctions_15.o Primitives/CommunicationFunctions_16.o Primitives/CommunicationFunctions_17.o Primitives/CommunicationFunctions_18.o Primitives/CommunicationFunctions_19.o Primitives/CommunicationFunctions_2.o Primitives/CommunicationFunctions_20.o Primitives/CommunicationFunctions_21.o Primitives/CommunicationFunctions_22.o Primitives/CommunicationFunctions_23.o Primitives/CommunicationFunctions_24.o Primitives/CommunicationFunctions_25.o Primitives/CommunicationFunctions_26.o Primitives/CommunicationFunctions_27.o Primitives/CommunicationFunctions_28.o Primitives/CommunicationFunctions_29.o Primitives/CommunicationFunctions_3.o Primitives/CommunicationFunctions_30.o Primitives/CommunicationFunctions_31.o Primitives/CommunicationFunctions_32.o Primitives/CommunicationFunctions_33.o Primitives/CommunicationFunctions_34.o Primitives/CommunicationFunctions_35.o Primitives/CommunicationFunctions_36.o Primitives/CommunicationFunctions_37.o Primitives/CommunicationFunctions_38.o Primitives/CommunicationFunctions_39.o Primitives/CommunicationFunctions_4.o Primitives/CommunicationFunctions_40.o Primitives/CommunicationFunctions_41.o Primitives/CommunicationFunctions_42.o Primitives/CommunicationFunctions_43.o Primitives/CommunicationFunctions_44.o Primitives/CommunicationFunctions_45.o Primitives/CommunicationFunctions_46.o Primitives/CommunicationFunctions_47.o Primitives/CommunicationFunctions_48.o Primitives/CommunicationFunctions_49.o Primitives/CommunicationFunctions_5.o Primitives/CommunicationFunctions_50.o Primitives/CommunicationFunctions_51.o Primitives/CommunicationFunctions_52.o Primitives/CommunicationFunctions_53.o Primitives/CommunicationFunctions_54.o Primitives/CommunicationFunctions_55.o Primitives/CommunicationFunctions_56.o Primitives/CommunicationFunctions_57.o Primitives/CommunicationFunctions_58.o Primitives/CommunicationFunctions_59.o Primitives/CommunicationFunctions_6.o Primitives/CommunicationFunctions_60.o Primitives/CommunicationFunctions_61.o Primitives/CommunicationFunctions_62.o Primitives/CommunicationFunctions_63.o Primitives/CommunicationFunctions_64.o Primitives/CommunicationFunctions_65.o Primitives/CommunicationFunctions_66.o Primitives/CommunicationFunctions_67.o Primitives/CommunicationFunctions_68.o Primitives/CommunicationFunctions_69.o Primitives/CommunicationFunctions_7.o Primitives/CommunicationFunctions_70.o Primitives/CommunicationFunctions_71.o Primitives/CommunicationFunctions_72.o Primitives/CommunicationFunctions_73.o Primitives/CommunicationFunctions_74.o Primitives/CommunicationFunctions_75.o Primitives/CommunicationFunctions_76.o Primitives/CommunicationFunctions_77.o Primitives/CommunicationFunctions_78.o Primitives/CommunicationFunctions_79.o Primitives/CommunicationFunctions_8.o Primitives/CommunicationFunctions_80.o Primitives/CommunicationFunctions_81.o Primitives/CommunicationFunctions_82.o Primitives/CommunicationFunctions_83.o Primitives/CommunicationFunctions_84.o Primitives/CommunicationFunctions_85.o Primitives/CommunicationFunctions_86.o Primitives/CommunicationFunctions_9.o Util/Gamma.o 

Domains/DomainGenerated_0.o: Domains/DomainGenerated_0.cpp  
	${CXX} ${CFLAGS} -c -o Domains/DomainGenerated_0.o -I. Domains/DomainGenerated_0.cpp
Globals/Globals_0.o: Globals/Globals_0.cpp  
	${CXX} ${CFLAGS} -c -o Globals/Globals_0.o -I. Globals/Globals_0.cpp
Globals/Globals_1.o: Globals/Globals_1.cpp  
	${CXX} ${CFLAGS} -c -o Globals/Globals_1.o -I. Globals/Globals_1.cpp
Globals/Globals_2.o: Globals/Globals_2.cpp  
	${CXX} ${CFLAGS} -c -o Globals/Globals_2.o -I. Globals/Globals_2.cpp
Globals/Globals_3.o: Globals/Globals_3.cpp  
	${CXX} ${CFLAGS} -c -o Globals/Globals_3.o -I. Globals/Globals_3.cpp
MultiGrid/MultiGrid_0.o: MultiGrid/MultiGrid_0.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_0.o -I. MultiGrid/MultiGrid_0.cpp
MultiGrid/MultiGrid_1.o: MultiGrid/MultiGrid_1.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_1.o -I. MultiGrid/MultiGrid_1.cpp
MultiGrid/MultiGrid_10.o: MultiGrid/MultiGrid_10.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_10.o -I. MultiGrid/MultiGrid_10.cpp
MultiGrid/MultiGrid_100.o: MultiGrid/MultiGrid_100.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_100.o -I. MultiGrid/MultiGrid_100.cpp
MultiGrid/MultiGrid_101.o: MultiGrid/MultiGrid_101.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_101.o -I. MultiGrid/MultiGrid_101.cpp
MultiGrid/MultiGrid_102.o: MultiGrid/MultiGrid_102.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_102.o -I. MultiGrid/MultiGrid_102.cpp
MultiGrid/MultiGrid_103.o: MultiGrid/MultiGrid_103.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_103.o -I. MultiGrid/MultiGrid_103.cpp
MultiGrid/MultiGrid_104.o: MultiGrid/MultiGrid_104.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_104.o -I. MultiGrid/MultiGrid_104.cpp
MultiGrid/MultiGrid_105.o: MultiGrid/MultiGrid_105.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_105.o -I. MultiGrid/MultiGrid_105.cpp
MultiGrid/MultiGrid_106.o: MultiGrid/MultiGrid_106.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_106.o -I. MultiGrid/MultiGrid_106.cpp
MultiGrid/MultiGrid_107.o: MultiGrid/MultiGrid_107.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_107.o -I. MultiGrid/MultiGrid_107.cpp
MultiGrid/MultiGrid_108.o: MultiGrid/MultiGrid_108.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_108.o -I. MultiGrid/MultiGrid_108.cpp
MultiGrid/MultiGrid_109.o: MultiGrid/MultiGrid_109.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_109.o -I. MultiGrid/MultiGrid_109.cpp
MultiGrid/MultiGrid_11.o: MultiGrid/MultiGrid_11.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_11.o -I. MultiGrid/MultiGrid_11.cpp
MultiGrid/MultiGrid_110.o: MultiGrid/MultiGrid_110.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_110.o -I. MultiGrid/MultiGrid_110.cpp
MultiGrid/MultiGrid_111.o: MultiGrid/MultiGrid_111.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_111.o -I. MultiGrid/MultiGrid_111.cpp
MultiGrid/MultiGrid_112.o: MultiGrid/MultiGrid_112.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_112.o -I. MultiGrid/MultiGrid_112.cpp
MultiGrid/MultiGrid_113.o: MultiGrid/MultiGrid_113.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_113.o -I. MultiGrid/MultiGrid_113.cpp
MultiGrid/MultiGrid_114.o: MultiGrid/MultiGrid_114.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_114.o -I. MultiGrid/MultiGrid_114.cpp
MultiGrid/MultiGrid_115.o: MultiGrid/MultiGrid_115.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_115.o -I. MultiGrid/MultiGrid_115.cpp
MultiGrid/MultiGrid_116.o: MultiGrid/MultiGrid_116.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_116.o -I. MultiGrid/MultiGrid_116.cpp
MultiGrid/MultiGrid_117.o: MultiGrid/MultiGrid_117.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_117.o -I. MultiGrid/MultiGrid_117.cpp
MultiGrid/MultiGrid_118.o: MultiGrid/MultiGrid_118.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_118.o -I. MultiGrid/MultiGrid_118.cpp
MultiGrid/MultiGrid_119.o: MultiGrid/MultiGrid_119.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_119.o -I. MultiGrid/MultiGrid_119.cpp
MultiGrid/MultiGrid_12.o: MultiGrid/MultiGrid_12.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_12.o -I. MultiGrid/MultiGrid_12.cpp
MultiGrid/MultiGrid_120.o: MultiGrid/MultiGrid_120.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_120.o -I. MultiGrid/MultiGrid_120.cpp
MultiGrid/MultiGrid_121.o: MultiGrid/MultiGrid_121.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_121.o -I. MultiGrid/MultiGrid_121.cpp
MultiGrid/MultiGrid_122.o: MultiGrid/MultiGrid_122.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_122.o -I. MultiGrid/MultiGrid_122.cpp
MultiGrid/MultiGrid_123.o: MultiGrid/MultiGrid_123.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_123.o -I. MultiGrid/MultiGrid_123.cpp
MultiGrid/MultiGrid_124.o: MultiGrid/MultiGrid_124.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_124.o -I. MultiGrid/MultiGrid_124.cpp
MultiGrid/MultiGrid_125.o: MultiGrid/MultiGrid_125.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_125.o -I. MultiGrid/MultiGrid_125.cpp
MultiGrid/MultiGrid_126.o: MultiGrid/MultiGrid_126.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_126.o -I. MultiGrid/MultiGrid_126.cpp
MultiGrid/MultiGrid_127.o: MultiGrid/MultiGrid_127.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_127.o -I. MultiGrid/MultiGrid_127.cpp
MultiGrid/MultiGrid_128.o: MultiGrid/MultiGrid_128.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_128.o -I. MultiGrid/MultiGrid_128.cpp
MultiGrid/MultiGrid_129.o: MultiGrid/MultiGrid_129.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_129.o -I. MultiGrid/MultiGrid_129.cpp
MultiGrid/MultiGrid_13.o: MultiGrid/MultiGrid_13.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_13.o -I. MultiGrid/MultiGrid_13.cpp
MultiGrid/MultiGrid_130.o: MultiGrid/MultiGrid_130.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_130.o -I. MultiGrid/MultiGrid_130.cpp
MultiGrid/MultiGrid_131.o: MultiGrid/MultiGrid_131.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_131.o -I. MultiGrid/MultiGrid_131.cpp
MultiGrid/MultiGrid_132.o: MultiGrid/MultiGrid_132.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_132.o -I. MultiGrid/MultiGrid_132.cpp
MultiGrid/MultiGrid_133.o: MultiGrid/MultiGrid_133.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_133.o -I. MultiGrid/MultiGrid_133.cpp
MultiGrid/MultiGrid_134.o: MultiGrid/MultiGrid_134.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_134.o -I. MultiGrid/MultiGrid_134.cpp
MultiGrid/MultiGrid_14.o: MultiGrid/MultiGrid_14.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_14.o -I. MultiGrid/MultiGrid_14.cpp
MultiGrid/MultiGrid_15.o: MultiGrid/MultiGrid_15.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_15.o -I. MultiGrid/MultiGrid_15.cpp
MultiGrid/MultiGrid_16.o: MultiGrid/MultiGrid_16.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_16.o -I. MultiGrid/MultiGrid_16.cpp
MultiGrid/MultiGrid_17.o: MultiGrid/MultiGrid_17.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_17.o -I. MultiGrid/MultiGrid_17.cpp
MultiGrid/MultiGrid_18.o: MultiGrid/MultiGrid_18.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_18.o -I. MultiGrid/MultiGrid_18.cpp
MultiGrid/MultiGrid_19.o: MultiGrid/MultiGrid_19.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_19.o -I. MultiGrid/MultiGrid_19.cpp
MultiGrid/MultiGrid_2.o: MultiGrid/MultiGrid_2.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_2.o -I. MultiGrid/MultiGrid_2.cpp
MultiGrid/MultiGrid_20.o: MultiGrid/MultiGrid_20.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_20.o -I. MultiGrid/MultiGrid_20.cpp
MultiGrid/MultiGrid_21.o: MultiGrid/MultiGrid_21.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_21.o -I. MultiGrid/MultiGrid_21.cpp
MultiGrid/MultiGrid_22.o: MultiGrid/MultiGrid_22.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_22.o -I. MultiGrid/MultiGrid_22.cpp
MultiGrid/MultiGrid_23.o: MultiGrid/MultiGrid_23.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_23.o -I. MultiGrid/MultiGrid_23.cpp
MultiGrid/MultiGrid_24.o: MultiGrid/MultiGrid_24.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_24.o -I. MultiGrid/MultiGrid_24.cpp
MultiGrid/MultiGrid_25.o: MultiGrid/MultiGrid_25.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_25.o -I. MultiGrid/MultiGrid_25.cpp
MultiGrid/MultiGrid_26.o: MultiGrid/MultiGrid_26.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_26.o -I. MultiGrid/MultiGrid_26.cpp
MultiGrid/MultiGrid_27.o: MultiGrid/MultiGrid_27.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_27.o -I. MultiGrid/MultiGrid_27.cpp
MultiGrid/MultiGrid_28.o: MultiGrid/MultiGrid_28.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_28.o -I. MultiGrid/MultiGrid_28.cpp
MultiGrid/MultiGrid_29.o: MultiGrid/MultiGrid_29.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_29.o -I. MultiGrid/MultiGrid_29.cpp
MultiGrid/MultiGrid_3.o: MultiGrid/MultiGrid_3.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_3.o -I. MultiGrid/MultiGrid_3.cpp
MultiGrid/MultiGrid_30.o: MultiGrid/MultiGrid_30.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_30.o -I. MultiGrid/MultiGrid_30.cpp
MultiGrid/MultiGrid_31.o: MultiGrid/MultiGrid_31.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_31.o -I. MultiGrid/MultiGrid_31.cpp
MultiGrid/MultiGrid_32.o: MultiGrid/MultiGrid_32.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_32.o -I. MultiGrid/MultiGrid_32.cpp
MultiGrid/MultiGrid_33.o: MultiGrid/MultiGrid_33.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_33.o -I. MultiGrid/MultiGrid_33.cpp
MultiGrid/MultiGrid_34.o: MultiGrid/MultiGrid_34.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_34.o -I. MultiGrid/MultiGrid_34.cpp
MultiGrid/MultiGrid_35.o: MultiGrid/MultiGrid_35.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_35.o -I. MultiGrid/MultiGrid_35.cpp
MultiGrid/MultiGrid_36.o: MultiGrid/MultiGrid_36.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_36.o -I. MultiGrid/MultiGrid_36.cpp
MultiGrid/MultiGrid_37.o: MultiGrid/MultiGrid_37.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_37.o -I. MultiGrid/MultiGrid_37.cpp
MultiGrid/MultiGrid_38.o: MultiGrid/MultiGrid_38.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_38.o -I. MultiGrid/MultiGrid_38.cpp
MultiGrid/MultiGrid_39.o: MultiGrid/MultiGrid_39.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_39.o -I. MultiGrid/MultiGrid_39.cpp
MultiGrid/MultiGrid_4.o: MultiGrid/MultiGrid_4.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_4.o -I. MultiGrid/MultiGrid_4.cpp
MultiGrid/MultiGrid_40.o: MultiGrid/MultiGrid_40.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_40.o -I. MultiGrid/MultiGrid_40.cpp
MultiGrid/MultiGrid_41.o: MultiGrid/MultiGrid_41.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_41.o -I. MultiGrid/MultiGrid_41.cpp
MultiGrid/MultiGrid_42.o: MultiGrid/MultiGrid_42.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_42.o -I. MultiGrid/MultiGrid_42.cpp
MultiGrid/MultiGrid_43.o: MultiGrid/MultiGrid_43.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_43.o -I. MultiGrid/MultiGrid_43.cpp
MultiGrid/MultiGrid_44.o: MultiGrid/MultiGrid_44.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_44.o -I. MultiGrid/MultiGrid_44.cpp
MultiGrid/MultiGrid_45.o: MultiGrid/MultiGrid_45.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_45.o -I. MultiGrid/MultiGrid_45.cpp
MultiGrid/MultiGrid_46.o: MultiGrid/MultiGrid_46.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_46.o -I. MultiGrid/MultiGrid_46.cpp
MultiGrid/MultiGrid_47.o: MultiGrid/MultiGrid_47.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_47.o -I. MultiGrid/MultiGrid_47.cpp
MultiGrid/MultiGrid_48.o: MultiGrid/MultiGrid_48.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_48.o -I. MultiGrid/MultiGrid_48.cpp
MultiGrid/MultiGrid_49.o: MultiGrid/MultiGrid_49.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_49.o -I. MultiGrid/MultiGrid_49.cpp
MultiGrid/MultiGrid_5.o: MultiGrid/MultiGrid_5.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_5.o -I. MultiGrid/MultiGrid_5.cpp
MultiGrid/MultiGrid_50.o: MultiGrid/MultiGrid_50.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_50.o -I. MultiGrid/MultiGrid_50.cpp
MultiGrid/MultiGrid_51.o: MultiGrid/MultiGrid_51.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_51.o -I. MultiGrid/MultiGrid_51.cpp
MultiGrid/MultiGrid_52.o: MultiGrid/MultiGrid_52.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_52.o -I. MultiGrid/MultiGrid_52.cpp
MultiGrid/MultiGrid_53.o: MultiGrid/MultiGrid_53.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_53.o -I. MultiGrid/MultiGrid_53.cpp
MultiGrid/MultiGrid_54.o: MultiGrid/MultiGrid_54.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_54.o -I. MultiGrid/MultiGrid_54.cpp
MultiGrid/MultiGrid_55.o: MultiGrid/MultiGrid_55.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_55.o -I. MultiGrid/MultiGrid_55.cpp
MultiGrid/MultiGrid_56.o: MultiGrid/MultiGrid_56.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_56.o -I. MultiGrid/MultiGrid_56.cpp
MultiGrid/MultiGrid_57.o: MultiGrid/MultiGrid_57.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_57.o -I. MultiGrid/MultiGrid_57.cpp
MultiGrid/MultiGrid_58.o: MultiGrid/MultiGrid_58.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_58.o -I. MultiGrid/MultiGrid_58.cpp
MultiGrid/MultiGrid_59.o: MultiGrid/MultiGrid_59.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_59.o -I. MultiGrid/MultiGrid_59.cpp
MultiGrid/MultiGrid_6.o: MultiGrid/MultiGrid_6.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_6.o -I. MultiGrid/MultiGrid_6.cpp
MultiGrid/MultiGrid_60.o: MultiGrid/MultiGrid_60.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_60.o -I. MultiGrid/MultiGrid_60.cpp
MultiGrid/MultiGrid_61.o: MultiGrid/MultiGrid_61.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_61.o -I. MultiGrid/MultiGrid_61.cpp
MultiGrid/MultiGrid_62.o: MultiGrid/MultiGrid_62.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_62.o -I. MultiGrid/MultiGrid_62.cpp
MultiGrid/MultiGrid_63.o: MultiGrid/MultiGrid_63.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_63.o -I. MultiGrid/MultiGrid_63.cpp
MultiGrid/MultiGrid_64.o: MultiGrid/MultiGrid_64.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_64.o -I. MultiGrid/MultiGrid_64.cpp
MultiGrid/MultiGrid_65.o: MultiGrid/MultiGrid_65.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_65.o -I. MultiGrid/MultiGrid_65.cpp
MultiGrid/MultiGrid_66.o: MultiGrid/MultiGrid_66.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_66.o -I. MultiGrid/MultiGrid_66.cpp
MultiGrid/MultiGrid_67.o: MultiGrid/MultiGrid_67.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_67.o -I. MultiGrid/MultiGrid_67.cpp
MultiGrid/MultiGrid_68.o: MultiGrid/MultiGrid_68.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_68.o -I. MultiGrid/MultiGrid_68.cpp
MultiGrid/MultiGrid_69.o: MultiGrid/MultiGrid_69.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_69.o -I. MultiGrid/MultiGrid_69.cpp
MultiGrid/MultiGrid_7.o: MultiGrid/MultiGrid_7.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_7.o -I. MultiGrid/MultiGrid_7.cpp
MultiGrid/MultiGrid_70.o: MultiGrid/MultiGrid_70.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_70.o -I. MultiGrid/MultiGrid_70.cpp
MultiGrid/MultiGrid_71.o: MultiGrid/MultiGrid_71.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_71.o -I. MultiGrid/MultiGrid_71.cpp
MultiGrid/MultiGrid_72.o: MultiGrid/MultiGrid_72.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_72.o -I. MultiGrid/MultiGrid_72.cpp
MultiGrid/MultiGrid_73.o: MultiGrid/MultiGrid_73.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_73.o -I. MultiGrid/MultiGrid_73.cpp
MultiGrid/MultiGrid_74.o: MultiGrid/MultiGrid_74.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_74.o -I. MultiGrid/MultiGrid_74.cpp
MultiGrid/MultiGrid_75.o: MultiGrid/MultiGrid_75.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_75.o -I. MultiGrid/MultiGrid_75.cpp
MultiGrid/MultiGrid_76.o: MultiGrid/MultiGrid_76.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_76.o -I. MultiGrid/MultiGrid_76.cpp
MultiGrid/MultiGrid_77.o: MultiGrid/MultiGrid_77.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_77.o -I. MultiGrid/MultiGrid_77.cpp
MultiGrid/MultiGrid_78.o: MultiGrid/MultiGrid_78.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_78.o -I. MultiGrid/MultiGrid_78.cpp
MultiGrid/MultiGrid_79.o: MultiGrid/MultiGrid_79.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_79.o -I. MultiGrid/MultiGrid_79.cpp
MultiGrid/MultiGrid_8.o: MultiGrid/MultiGrid_8.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_8.o -I. MultiGrid/MultiGrid_8.cpp
MultiGrid/MultiGrid_80.o: MultiGrid/MultiGrid_80.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_80.o -I. MultiGrid/MultiGrid_80.cpp
MultiGrid/MultiGrid_81.o: MultiGrid/MultiGrid_81.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_81.o -I. MultiGrid/MultiGrid_81.cpp
MultiGrid/MultiGrid_82.o: MultiGrid/MultiGrid_82.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_82.o -I. MultiGrid/MultiGrid_82.cpp
MultiGrid/MultiGrid_83.o: MultiGrid/MultiGrid_83.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_83.o -I. MultiGrid/MultiGrid_83.cpp
MultiGrid/MultiGrid_84.o: MultiGrid/MultiGrid_84.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_84.o -I. MultiGrid/MultiGrid_84.cpp
MultiGrid/MultiGrid_85.o: MultiGrid/MultiGrid_85.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_85.o -I. MultiGrid/MultiGrid_85.cpp
MultiGrid/MultiGrid_86.o: MultiGrid/MultiGrid_86.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_86.o -I. MultiGrid/MultiGrid_86.cpp
MultiGrid/MultiGrid_87.o: MultiGrid/MultiGrid_87.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_87.o -I. MultiGrid/MultiGrid_87.cpp
MultiGrid/MultiGrid_88.o: MultiGrid/MultiGrid_88.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_88.o -I. MultiGrid/MultiGrid_88.cpp
MultiGrid/MultiGrid_89.o: MultiGrid/MultiGrid_89.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_89.o -I. MultiGrid/MultiGrid_89.cpp
MultiGrid/MultiGrid_9.o: MultiGrid/MultiGrid_9.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_9.o -I. MultiGrid/MultiGrid_9.cpp
MultiGrid/MultiGrid_90.o: MultiGrid/MultiGrid_90.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_90.o -I. MultiGrid/MultiGrid_90.cpp
MultiGrid/MultiGrid_91.o: MultiGrid/MultiGrid_91.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_91.o -I. MultiGrid/MultiGrid_91.cpp
MultiGrid/MultiGrid_92.o: MultiGrid/MultiGrid_92.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_92.o -I. MultiGrid/MultiGrid_92.cpp
MultiGrid/MultiGrid_93.o: MultiGrid/MultiGrid_93.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_93.o -I. MultiGrid/MultiGrid_93.cpp
MultiGrid/MultiGrid_94.o: MultiGrid/MultiGrid_94.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_94.o -I. MultiGrid/MultiGrid_94.cpp
MultiGrid/MultiGrid_95.o: MultiGrid/MultiGrid_95.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_95.o -I. MultiGrid/MultiGrid_95.cpp
MultiGrid/MultiGrid_96.o: MultiGrid/MultiGrid_96.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_96.o -I. MultiGrid/MultiGrid_96.cpp
MultiGrid/MultiGrid_97.o: MultiGrid/MultiGrid_97.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_97.o -I. MultiGrid/MultiGrid_97.cpp
MultiGrid/MultiGrid_98.o: MultiGrid/MultiGrid_98.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_98.o -I. MultiGrid/MultiGrid_98.cpp
MultiGrid/MultiGrid_99.o: MultiGrid/MultiGrid_99.cpp  
	${CXX} ${CFLAGS} -c -o MultiGrid/MultiGrid_99.o -I. MultiGrid/MultiGrid_99.cpp
Primitives/CommunicationFunctions_0.o: Primitives/CommunicationFunctions_0.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_0.o -I. Primitives/CommunicationFunctions_0.cpp
Primitives/CommunicationFunctions_1.o: Primitives/CommunicationFunctions_1.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_1.o -I. Primitives/CommunicationFunctions_1.cpp
Primitives/CommunicationFunctions_10.o: Primitives/CommunicationFunctions_10.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_10.o -I. Primitives/CommunicationFunctions_10.cpp
Primitives/CommunicationFunctions_11.o: Primitives/CommunicationFunctions_11.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_11.o -I. Primitives/CommunicationFunctions_11.cpp
Primitives/CommunicationFunctions_12.o: Primitives/CommunicationFunctions_12.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_12.o -I. Primitives/CommunicationFunctions_12.cpp
Primitives/CommunicationFunctions_13.o: Primitives/CommunicationFunctions_13.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_13.o -I. Primitives/CommunicationFunctions_13.cpp
Primitives/CommunicationFunctions_14.o: Primitives/CommunicationFunctions_14.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_14.o -I. Primitives/CommunicationFunctions_14.cpp
Primitives/CommunicationFunctions_15.o: Primitives/CommunicationFunctions_15.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_15.o -I. Primitives/CommunicationFunctions_15.cpp
Primitives/CommunicationFunctions_16.o: Primitives/CommunicationFunctions_16.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_16.o -I. Primitives/CommunicationFunctions_16.cpp
Primitives/CommunicationFunctions_17.o: Primitives/CommunicationFunctions_17.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_17.o -I. Primitives/CommunicationFunctions_17.cpp
Primitives/CommunicationFunctions_18.o: Primitives/CommunicationFunctions_18.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_18.o -I. Primitives/CommunicationFunctions_18.cpp
Primitives/CommunicationFunctions_19.o: Primitives/CommunicationFunctions_19.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_19.o -I. Primitives/CommunicationFunctions_19.cpp
Primitives/CommunicationFunctions_2.o: Primitives/CommunicationFunctions_2.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_2.o -I. Primitives/CommunicationFunctions_2.cpp
Primitives/CommunicationFunctions_20.o: Primitives/CommunicationFunctions_20.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_20.o -I. Primitives/CommunicationFunctions_20.cpp
Primitives/CommunicationFunctions_21.o: Primitives/CommunicationFunctions_21.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_21.o -I. Primitives/CommunicationFunctions_21.cpp
Primitives/CommunicationFunctions_22.o: Primitives/CommunicationFunctions_22.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_22.o -I. Primitives/CommunicationFunctions_22.cpp
Primitives/CommunicationFunctions_23.o: Primitives/CommunicationFunctions_23.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_23.o -I. Primitives/CommunicationFunctions_23.cpp
Primitives/CommunicationFunctions_24.o: Primitives/CommunicationFunctions_24.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_24.o -I. Primitives/CommunicationFunctions_24.cpp
Primitives/CommunicationFunctions_25.o: Primitives/CommunicationFunctions_25.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_25.o -I. Primitives/CommunicationFunctions_25.cpp
Primitives/CommunicationFunctions_26.o: Primitives/CommunicationFunctions_26.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_26.o -I. Primitives/CommunicationFunctions_26.cpp
Primitives/CommunicationFunctions_27.o: Primitives/CommunicationFunctions_27.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_27.o -I. Primitives/CommunicationFunctions_27.cpp
Primitives/CommunicationFunctions_28.o: Primitives/CommunicationFunctions_28.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_28.o -I. Primitives/CommunicationFunctions_28.cpp
Primitives/CommunicationFunctions_29.o: Primitives/CommunicationFunctions_29.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_29.o -I. Primitives/CommunicationFunctions_29.cpp
Primitives/CommunicationFunctions_3.o: Primitives/CommunicationFunctions_3.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_3.o -I. Primitives/CommunicationFunctions_3.cpp
Primitives/CommunicationFunctions_30.o: Primitives/CommunicationFunctions_30.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_30.o -I. Primitives/CommunicationFunctions_30.cpp
Primitives/CommunicationFunctions_31.o: Primitives/CommunicationFunctions_31.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_31.o -I. Primitives/CommunicationFunctions_31.cpp
Primitives/CommunicationFunctions_32.o: Primitives/CommunicationFunctions_32.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_32.o -I. Primitives/CommunicationFunctions_32.cpp
Primitives/CommunicationFunctions_33.o: Primitives/CommunicationFunctions_33.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_33.o -I. Primitives/CommunicationFunctions_33.cpp
Primitives/CommunicationFunctions_34.o: Primitives/CommunicationFunctions_34.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_34.o -I. Primitives/CommunicationFunctions_34.cpp
Primitives/CommunicationFunctions_35.o: Primitives/CommunicationFunctions_35.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_35.o -I. Primitives/CommunicationFunctions_35.cpp
Primitives/CommunicationFunctions_36.o: Primitives/CommunicationFunctions_36.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_36.o -I. Primitives/CommunicationFunctions_36.cpp
Primitives/CommunicationFunctions_37.o: Primitives/CommunicationFunctions_37.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_37.o -I. Primitives/CommunicationFunctions_37.cpp
Primitives/CommunicationFunctions_38.o: Primitives/CommunicationFunctions_38.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_38.o -I. Primitives/CommunicationFunctions_38.cpp
Primitives/CommunicationFunctions_39.o: Primitives/CommunicationFunctions_39.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_39.o -I. Primitives/CommunicationFunctions_39.cpp
Primitives/CommunicationFunctions_4.o: Primitives/CommunicationFunctions_4.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_4.o -I. Primitives/CommunicationFunctions_4.cpp
Primitives/CommunicationFunctions_40.o: Primitives/CommunicationFunctions_40.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_40.o -I. Primitives/CommunicationFunctions_40.cpp
Primitives/CommunicationFunctions_41.o: Primitives/CommunicationFunctions_41.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_41.o -I. Primitives/CommunicationFunctions_41.cpp
Primitives/CommunicationFunctions_42.o: Primitives/CommunicationFunctions_42.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_42.o -I. Primitives/CommunicationFunctions_42.cpp
Primitives/CommunicationFunctions_43.o: Primitives/CommunicationFunctions_43.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_43.o -I. Primitives/CommunicationFunctions_43.cpp
Primitives/CommunicationFunctions_44.o: Primitives/CommunicationFunctions_44.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_44.o -I. Primitives/CommunicationFunctions_44.cpp
Primitives/CommunicationFunctions_45.o: Primitives/CommunicationFunctions_45.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_45.o -I. Primitives/CommunicationFunctions_45.cpp
Primitives/CommunicationFunctions_46.o: Primitives/CommunicationFunctions_46.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_46.o -I. Primitives/CommunicationFunctions_46.cpp
Primitives/CommunicationFunctions_47.o: Primitives/CommunicationFunctions_47.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_47.o -I. Primitives/CommunicationFunctions_47.cpp
Primitives/CommunicationFunctions_48.o: Primitives/CommunicationFunctions_48.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_48.o -I. Primitives/CommunicationFunctions_48.cpp
Primitives/CommunicationFunctions_49.o: Primitives/CommunicationFunctions_49.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_49.o -I. Primitives/CommunicationFunctions_49.cpp
Primitives/CommunicationFunctions_5.o: Primitives/CommunicationFunctions_5.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_5.o -I. Primitives/CommunicationFunctions_5.cpp
Primitives/CommunicationFunctions_50.o: Primitives/CommunicationFunctions_50.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_50.o -I. Primitives/CommunicationFunctions_50.cpp
Primitives/CommunicationFunctions_51.o: Primitives/CommunicationFunctions_51.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_51.o -I. Primitives/CommunicationFunctions_51.cpp
Primitives/CommunicationFunctions_52.o: Primitives/CommunicationFunctions_52.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_52.o -I. Primitives/CommunicationFunctions_52.cpp
Primitives/CommunicationFunctions_53.o: Primitives/CommunicationFunctions_53.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_53.o -I. Primitives/CommunicationFunctions_53.cpp
Primitives/CommunicationFunctions_54.o: Primitives/CommunicationFunctions_54.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_54.o -I. Primitives/CommunicationFunctions_54.cpp
Primitives/CommunicationFunctions_55.o: Primitives/CommunicationFunctions_55.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_55.o -I. Primitives/CommunicationFunctions_55.cpp
Primitives/CommunicationFunctions_56.o: Primitives/CommunicationFunctions_56.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_56.o -I. Primitives/CommunicationFunctions_56.cpp
Primitives/CommunicationFunctions_57.o: Primitives/CommunicationFunctions_57.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_57.o -I. Primitives/CommunicationFunctions_57.cpp
Primitives/CommunicationFunctions_58.o: Primitives/CommunicationFunctions_58.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_58.o -I. Primitives/CommunicationFunctions_58.cpp
Primitives/CommunicationFunctions_59.o: Primitives/CommunicationFunctions_59.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_59.o -I. Primitives/CommunicationFunctions_59.cpp
Primitives/CommunicationFunctions_6.o: Primitives/CommunicationFunctions_6.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_6.o -I. Primitives/CommunicationFunctions_6.cpp
Primitives/CommunicationFunctions_60.o: Primitives/CommunicationFunctions_60.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_60.o -I. Primitives/CommunicationFunctions_60.cpp
Primitives/CommunicationFunctions_61.o: Primitives/CommunicationFunctions_61.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_61.o -I. Primitives/CommunicationFunctions_61.cpp
Primitives/CommunicationFunctions_62.o: Primitives/CommunicationFunctions_62.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_62.o -I. Primitives/CommunicationFunctions_62.cpp
Primitives/CommunicationFunctions_63.o: Primitives/CommunicationFunctions_63.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_63.o -I. Primitives/CommunicationFunctions_63.cpp
Primitives/CommunicationFunctions_64.o: Primitives/CommunicationFunctions_64.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_64.o -I. Primitives/CommunicationFunctions_64.cpp
Primitives/CommunicationFunctions_65.o: Primitives/CommunicationFunctions_65.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_65.o -I. Primitives/CommunicationFunctions_65.cpp
Primitives/CommunicationFunctions_66.o: Primitives/CommunicationFunctions_66.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_66.o -I. Primitives/CommunicationFunctions_66.cpp
Primitives/CommunicationFunctions_67.o: Primitives/CommunicationFunctions_67.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_67.o -I. Primitives/CommunicationFunctions_67.cpp
Primitives/CommunicationFunctions_68.o: Primitives/CommunicationFunctions_68.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_68.o -I. Primitives/CommunicationFunctions_68.cpp
Primitives/CommunicationFunctions_69.o: Primitives/CommunicationFunctions_69.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_69.o -I. Primitives/CommunicationFunctions_69.cpp
Primitives/CommunicationFunctions_7.o: Primitives/CommunicationFunctions_7.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_7.o -I. Primitives/CommunicationFunctions_7.cpp
Primitives/CommunicationFunctions_70.o: Primitives/CommunicationFunctions_70.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_70.o -I. Primitives/CommunicationFunctions_70.cpp
Primitives/CommunicationFunctions_71.o: Primitives/CommunicationFunctions_71.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_71.o -I. Primitives/CommunicationFunctions_71.cpp
Primitives/CommunicationFunctions_72.o: Primitives/CommunicationFunctions_72.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_72.o -I. Primitives/CommunicationFunctions_72.cpp
Primitives/CommunicationFunctions_73.o: Primitives/CommunicationFunctions_73.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_73.o -I. Primitives/CommunicationFunctions_73.cpp
Primitives/CommunicationFunctions_74.o: Primitives/CommunicationFunctions_74.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_74.o -I. Primitives/CommunicationFunctions_74.cpp
Primitives/CommunicationFunctions_75.o: Primitives/CommunicationFunctions_75.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_75.o -I. Primitives/CommunicationFunctions_75.cpp
Primitives/CommunicationFunctions_76.o: Primitives/CommunicationFunctions_76.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_76.o -I. Primitives/CommunicationFunctions_76.cpp
Primitives/CommunicationFunctions_77.o: Primitives/CommunicationFunctions_77.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_77.o -I. Primitives/CommunicationFunctions_77.cpp
Primitives/CommunicationFunctions_78.o: Primitives/CommunicationFunctions_78.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_78.o -I. Primitives/CommunicationFunctions_78.cpp
Primitives/CommunicationFunctions_79.o: Primitives/CommunicationFunctions_79.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_79.o -I. Primitives/CommunicationFunctions_79.cpp
Primitives/CommunicationFunctions_8.o: Primitives/CommunicationFunctions_8.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_8.o -I. Primitives/CommunicationFunctions_8.cpp
Primitives/CommunicationFunctions_80.o: Primitives/CommunicationFunctions_80.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_80.o -I. Primitives/CommunicationFunctions_80.cpp
Primitives/CommunicationFunctions_81.o: Primitives/CommunicationFunctions_81.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_81.o -I. Primitives/CommunicationFunctions_81.cpp
Primitives/CommunicationFunctions_82.o: Primitives/CommunicationFunctions_82.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_82.o -I. Primitives/CommunicationFunctions_82.cpp
Primitives/CommunicationFunctions_83.o: Primitives/CommunicationFunctions_83.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_83.o -I. Primitives/CommunicationFunctions_83.cpp
Primitives/CommunicationFunctions_84.o: Primitives/CommunicationFunctions_84.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_84.o -I. Primitives/CommunicationFunctions_84.cpp
Primitives/CommunicationFunctions_85.o: Primitives/CommunicationFunctions_85.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_85.o -I. Primitives/CommunicationFunctions_85.cpp
Primitives/CommunicationFunctions_86.o: Primitives/CommunicationFunctions_86.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_86.o -I. Primitives/CommunicationFunctions_86.cpp
Primitives/CommunicationFunctions_9.o: Primitives/CommunicationFunctions_9.cpp  
	${CXX} ${CFLAGS} -c -o Primitives/CommunicationFunctions_9.o -I. Primitives/CommunicationFunctions_9.cpp
Util/Gamma.o: Util/Gamma.cpp 
	${CXX} ${CFLAGS} -c -o Util/Gamma.o -I. Util/Gamma.cpp


