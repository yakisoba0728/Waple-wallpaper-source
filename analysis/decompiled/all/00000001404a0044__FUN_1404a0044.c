// Function: FUN_1404a0044
// Addr: 1404a0044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0082) */

void FUN_1404a0044(char *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint *in_RAX;
  byte bVar3;
  byte bVar4;
  undefined6 uVar5;
  longlong unaff_RBX;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  *(byte *)(unaff_RBX + (longlong)in_RAX) = *(byte *)(unaff_RBX + (longlong)in_RAX) ^ bVar3;
  cVar2 = bVar1 + bVar3 + '\x03' + CARRY1(bVar1,bVar3);
  *param_1 = *param_1 + -1;
  *param_2 = *param_2 + (int)param_1;
  bVar4 = bVar4 | param_1[CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                                   CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar4,
                                                            cVar2)) >> 8),cVar2)];
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4,bVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,bVar3)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

