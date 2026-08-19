// Function: FUN_1404c0148
// Addr: 1404c0148
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c0158) overlaps instruction at (ram,0x0001404c0157)
    */

void FUN_1404c0148(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  char in_ZF;
  undefined1 auStack_8 [8];
  
  param_1 = param_1 + -1;
  if (param_1 != 0 && in_ZF == '\0') {
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  bVar2 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  cVar3 = (in_AL - 0xf) - (bVar2 < in_AL);
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) - cVar3;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar3) + 1 + CONCAT71(in_register_00000001,cVar3))
  ;
  *pcVar1 = *pcVar1 + (char)param_1;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x1e;
  *(char *)(param_2 + -8) = *(char *)(param_2 + -8) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

