// Function: FUN_1404a59f0
// Addr: 1404a59f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a59f0(char *param_1,undefined2 param_2)

{
  uint uVar1;
  byte bVar3;
  undefined8 in_RAX;
  byte *pbVar2;
  
  bVar3 = (char)((ulonglong)in_RAX >> 8) + (char)((ushort)param_2 >> 8);
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(bVar3 + (byte)param_2,(char)in_RAX)) + 0x14c40000 +
          (uint)CARRY1(bVar3,(byte)param_2);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  pbVar2 = (byte *)((ulonglong)uVar1 ^ 0x12);
  pbVar2[-0x7d] = pbVar2[-0x7d] + (char)(uVar1 >> 8);
  *pbVar2 = *pbVar2 | (byte)pbVar2;
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar2;
  in(param_2);
  *param_1 = *param_1 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

