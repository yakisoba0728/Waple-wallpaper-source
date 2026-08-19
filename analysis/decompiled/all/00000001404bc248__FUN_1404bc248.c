// Function: FUN_1404bc248
// Addr: 1404bc248
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc248(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  uint *in_RAX;
  char unaff_SPL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(param_1 + -0x7e00ffde);
  *pbVar1 = *pbVar1 << 2 | *pbVar1 >> 6;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)in_RAX + 0xd) = *(char *)((longlong)in_RAX + 0xd) + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + (char)param_1;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((cVar3 + (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX)) +
          0x6d40000;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

