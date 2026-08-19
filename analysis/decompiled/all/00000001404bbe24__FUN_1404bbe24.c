// Function: FUN_1404bbe24
// Addr: 1404bbe24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbe24(undefined8 param_1,uint *param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  uint unaff_ESP;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) = *(char *)CONCAT71(in_register_00000001,in_AL) << 2
  ;
  *param_2 = *param_2 ^ unaff_ESP;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) = *(char *)CONCAT71(in_register_00000001,in_AL) << 2
  ;
  *param_2 = *param_2 ^ unaff_ESP;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

