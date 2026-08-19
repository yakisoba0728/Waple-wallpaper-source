// Function: FUN_1404a37c4
// Addr: 1404a37c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a37c4(char param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  longlong lVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  byte in_CF;
  char *pcVar5;
  
  bVar1 = (byte)in_RAX + 0x32;
  lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + in_CF);
  pcVar5 = (char *)(lVar4 + 1);
  *pcVar5 = *pcVar5 + (char)((uint)param_2 >> 8) + (0xcd < (byte)in_RAX || CARRY1(bVar1,in_CF));
  uVar3 = (uint)lVar4 | *(uint *)CONCAT44(unaff_0000001c,unaff_EBX);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + param_1;
  *(int *)((ulonglong)uVar3 * 2) = *(int *)((ulonglong)uVar3 * 2) + param_2;
  cVar2 = (char)uVar3 + '0';
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *pcVar5 = *pcVar5 + cVar2;
  iRam00000001416737e4 = iRam00000001416737e4 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

