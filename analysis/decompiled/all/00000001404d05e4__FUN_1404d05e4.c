// Function: FUN_1404d05e4
// Addr: 1404d05e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d05eb) overlaps instruction at (ram,0x0001404d05ea)
    */

void FUN_1404d05e4(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte bVar4;
  byte *unaff_RBX;
  uint unaff_ESP;
  longlong in_FS_OFFSET;
  
  bVar4 = (byte)param_2;
  uRam00000001147205f4 = uRam00000001147205f4 & unaff_ESP;
  uVar3 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((byte)((ulonglong)in_RAX >> 8) & (byte)in_RAX,(byte)in_RAX)) |
          0x14741b00;
  bVar1 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + bVar4;
  uVar3 = uVar3 + *(int *)(in_FS_OFFSET + (ulonglong)uVar3) + (uint)CARRY1(bVar1,bVar4);
  pbVar2 = (byte *)(param_2 * 2);
  *pbVar2 = *pbVar2 | bVar4;
  if (param_1 == 1 || *pbVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

