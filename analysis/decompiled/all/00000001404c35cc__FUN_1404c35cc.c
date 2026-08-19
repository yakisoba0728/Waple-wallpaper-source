// Function: FUN_1404c35cc
// Addr: 1404c35cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c35cc(char *param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *in_RAX;
  uint *puVar6;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  bVar3 = (byte)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1((byte)uVar2,bVar3) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)((char)(byte)*in_RAX < '\0') * 0x80 | (ulonglong)((byte)*in_RAX == 0) * 0x40
             | (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT((byte)*in_RAX) & 1U) == 0) * 4
             | (ulonglong)CARRY1((byte)uVar4,bVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  uVar4 = (uint)in_RAX + 0xd1f6ffd5;
  uVar4 = uVar4 - *(int *)(ulonglong)uVar4;
  puVar6 = (uint *)(ulonglong)uVar4;
  puVar1 = (undefined1 *)((longlong)&uStack_8 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
  iVar5 = (uVar4 + 0xd263ffd5) - *(int *)(ulonglong)(uVar4 + 0xd263ffd5);
  *param_1 = *param_1 + param_3;
  uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(0x34,(char)iVar5)) + 0x34050002;
  *(int *)(param_1 + CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4)) =
       *(int *)(param_1 + CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4)) +
       (int)param_2;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

