// Function: FUN_1404a9ef0
// Addr: 1404a9ef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9ef0(char param_1,undefined8 param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_2 >> 8);
  cVar1 = (char)param_2 + *(char *)(CONCAT71(in_register_00000001,in_AL) + 0x21);
  *(byte *)CONCAT71(uVar2,cVar1) = *(byte *)CONCAT71(uVar2,cVar1) | in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

