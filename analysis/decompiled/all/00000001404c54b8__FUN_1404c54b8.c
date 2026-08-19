// Function: FUN_1404c54b8
// Addr: 1404c54b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c54b8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  int *unaff_RDI;
  char in_CF;
  
  bVar3 = (in_AL - *param_1) - in_CF;
  LOCK();
  *unaff_RBX = *unaff_RBX + (char)param_1;
  UNLOCK();
  *(byte *)CONCAT71(in_register_00000001,bVar3) =
       *(char *)CONCAT71(in_register_00000001,bVar3) + bVar3;
  bVar3 = bVar3 & (byte)param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar3) + 7);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  bVar2 = *(byte *)CONCAT71(in_register_00000001,bVar3);
  *(byte *)CONCAT71(in_register_00000001,bVar3) =
       *(char *)CONCAT71(in_register_00000001,bVar3) + bVar3;
  *unaff_RDI = *unaff_RDI + (int)param_1 + (uint)CARRY1(bVar2,bVar3);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

