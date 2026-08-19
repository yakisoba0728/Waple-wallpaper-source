// Function: FUN_1404a0b4c
// Addr: 1404a0b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b4c(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_RAX;
  undefined4 *puVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | bVar2;
  puVar3 = (undefined4 *)
           CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                    CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2 + bVar2,
                                             bVar2)) >> 8),bVar2);
  param_1[CONCAT71(unaff_00000019,unaff_BL)] =
       param_1[CONCAT71(unaff_00000019,unaff_BL)] + (char)((ulonglong)param_2 >> 8);
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)param_2;
  pbVar1 = (byte *)((longlong)puVar3 + -0x7f01fffd);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *param_1 = *param_1 + bVar2 + (char)*puVar3;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

