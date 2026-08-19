// Function: FUN_1404b4f20
// Addr: 1404b4f20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4f20(int *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  int unaff_ESI;
  
  cVar2 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + unaff_EBX;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + cVar2,(char)param_2)) + 0x15)
  ;
  *piVar1 = *piVar1 - unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

