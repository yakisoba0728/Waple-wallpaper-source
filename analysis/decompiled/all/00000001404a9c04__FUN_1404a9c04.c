// Function: FUN_1404a9c04
// Addr: 1404a9c04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c04(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char cVar4;
  undefined6 uVar5;
  char *pcVar3;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar1 = (char)param_1;
  *(char *)(param_1 + 0xd26c000) = *(char *)(param_1 + 0xd26c000) + (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)param_1 >> 8) + (char)(in_EAX >> 8);
  uVar2 = in_EAX | 0x4a9a9400;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) + (char)(uVar2 >> 8);
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + (char)in_EAX;
  cVar1 = in(8);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

