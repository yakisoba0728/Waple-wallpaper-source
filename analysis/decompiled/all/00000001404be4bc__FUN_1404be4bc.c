// Function: FUN_1404be4bc
// Addr: 1404be4bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be4bc(byte *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  char *in_RAX;
  int *piVar4;
  char cVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)in_RAX >> 8);
  in_RAX[param_2] = in_RAX[param_2] + (char)param_2;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar6;
  *in_RAX = *in_RAX + cVar6;
  uVar3 = (uint)in_RAX & 0x4b08d400;
  bVar2 = *param_1;
  bVar5 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  bVar2 = CARRY1(bVar2,bVar5) + 10;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)param_2;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11(bVar5 * '\x02',
                            bVar2 | *(byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2)));
  piVar4 = (int *)((ulonglong)(uVar3 | *(uint *)(ulonglong)uVar3) | 0x74);
  iVar1 = (int)piVar4 + *piVar4;
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3 + (uint)(0xab < (byte)iVar1);
  *(undefined1 *)(unaff_RBP + 0x25bce900) = *(undefined1 *)(unaff_RBP + 0x25bce900);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

