// Function: FUN_1404bc7e8
// Addr: 1404bc7e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc7e8(ulonglong param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  longlong in_RAX;
  char *pcVar4;
  int unaff_ESI;
  byte in_CF;
  
  *(uint *)(&stack0x00000000 + in_RAX) =
       *(int *)(&stack0x00000000 + in_RAX) + unaff_ESI + (uint)in_CF;
  uVar3 = (int)in_RAX + 0xb0000634;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 & *(byte *)(ulonglong)uVar3;
  bVar2 = bVar2 & *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  cVar5 = (char)(uVar3 >> 8);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar5;
  *pcVar4 = *pcVar4 + bVar2;
  pcVar4[-0xcffdd0b] = pcVar4[-0xcffdd0b] + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

