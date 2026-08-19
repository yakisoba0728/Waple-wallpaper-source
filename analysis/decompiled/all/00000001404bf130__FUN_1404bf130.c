// Function: FUN_1404bf130
// Addr: 1404bf130
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf130(char *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  uint *in_RAX;
  uint *puVar3;
  char cVar6;
  uint unaff_EDI;
  ulonglong uVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + -0x7b2fffda) = *(char *)(param_2 + -0x7b2fffda) + -0x4b;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar5;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  *(char *)((longlong)in_RAX + -0x56) = *(char *)((longlong)in_RAX + -0x56) + cVar5;
  *(char *)((longlong)in_RAX + -0x2fffd956) = *(char *)((longlong)in_RAX + -0x2fffd956) + bVar1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((cVar5 + cVar6) * '\x02',bVar1 | (byte)*in_RAX));
  uVar2 = (uint)puVar3 | *puVar3;
  bVar1 = (byte)uVar2;
  cVar5 = (char)(uVar2 >> 8) + bVar1;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(cVar5,bVar1));
  bVar1 = bVar1 | *(byte *)(ulonglong)uVar2;
  uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar5;
  param_1[uVar4] = param_1[uVar4] + cVar6;
  *(char *)(uVar4 - 0x56) = *(char *)(uVar4 - 0x56) + cVar5;
  *(char *)(uVar4 - 0x2fffd956) = *(char *)(uVar4 - 0x2fffd956) + bVar1;
  uRam000000013488f17e = uRam000000013488f17e & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

