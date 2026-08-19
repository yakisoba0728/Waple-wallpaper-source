// Function: FUN_1404bad14
// Addr: 1404bad14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad14(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint *in_RAX;
  uint *puVar2;
  char unaff_BH;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + *param_1,cVar1));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar2 = *puVar2 & (uint)puVar2;
  *param_4 = *param_4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

