// Function: FUN_1404c0c44
// Addr: 1404c0c44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0c44(undefined8 param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar2 = in_AL * '\x02';
  *unaff_RDI = *unaff_RSI;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + in_AL * -2;
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(unaff_RSI + 1);
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + in_AL * -2;
  cVar2 = cVar2 + cRam0000000157c01e5f;
  *param_2 = *param_2 + (char)param_2;
  piVar1 = (int *)(CONCAT71(in_register_00000001,cVar2) + CONCAT71(in_register_00000001,cVar2));
  *piVar1 = *piVar1 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

