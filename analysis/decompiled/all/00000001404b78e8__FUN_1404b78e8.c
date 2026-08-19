// Function: FUN_1404b78e8
// Addr: 1404b78e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b78e8(char *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte *pbVar6;
  
  bVar1 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar1,(byte)in_RAX));
  bVar2 = (byte)in_RAX | *pbVar6;
  *(char *)(param_2 + -0x6d01ffe3) = *(char *)(param_2 + -0x6d01ffe3) + '\x1d';
  cVar3 = bVar2 + bVar1;
  if (CARRY1(bVar2,bVar1) || cVar3 == '\0') {
    *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = ((int)CONCAT71((int7)((ulonglong)pbVar6 >> 8),cVar3) + -0x4b782800) -
          (uint)CARRY1(bVar2,bVar1);
  *param_1 = *param_1 + (char)((uint)iVar4 >> 8);
  uVar5 = iVar4 + 0x54050002;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

