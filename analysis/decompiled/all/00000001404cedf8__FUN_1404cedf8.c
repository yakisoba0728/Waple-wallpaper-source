// Function: FUN_1404cedf8
// Addr: 1404cedf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cedf8(char *param_1,byte param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 in_RAX;
  char unaff_R12B;
  byte *pbVar5;
  
  iVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)in_RAX);
  pbVar5 = (byte *)(ulonglong)(iVar3 + 0x18741e00);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + param_2;
  uVar4 = (iVar3 + 0x3801e00) - (uint)CARRY1(bVar2,param_2);
  pcVar1 = (char *)((ulonglong)uVar4 - 0x3bffc5ca);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

