// Function: FUN_14049e670
// Addr: 14049e670
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e670(char *param_1,longlong param_2)

{
  uint uVar1;
  char cVar3;
  uint *in_RAX;
  uint *puVar2;
  uint unaff_EBX;
  
  *in_RAX = *in_RAX & unaff_EBX;
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) - (char)param_2,(char)in_RAX));
  *puVar2 = *puVar2 | (uint)puVar2;
  bRam8c0000d6ca0000d6 = (char)in_RAX - 0x3c;
  bRam8c0000d6ca0000d6 =
       bRam8c0000d6ca0000d6 | *(byte *)CONCAT71((int7)((ulonglong)puVar2 >> 8),bRam8c0000d6ca0000d6)
  ;
  uVar1 = in(0x49);
  cVar3 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *(char *)(param_2 + -0x35ffff2a) = *(char *)(param_2 + -0x35ffff2a) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

