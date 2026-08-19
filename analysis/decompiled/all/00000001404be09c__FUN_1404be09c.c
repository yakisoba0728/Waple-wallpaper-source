// Function: FUN_1404be09c
// Addr: 1404be09c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be09c(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar4 = (undefined1)((ulonglong)param_1 >> 8);
  cVar1 = (char)param_1;
  pcVar3 = (char *)func_0x00013f4c064a();
  *param_4 = *param_4;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  uVar2 = (uint)pcVar3 & 0x4bdfa400;
  *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar1)) + (char)(uVar2 >> 8);
  *(undefined1 *)(ulonglong)uVar2 = *(undefined1 *)(ulonglong)uVar2;
  uVar2 = uVar2 >> 8 & 0x4b0594;
  *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar1)) + (char)uVar2;
  *param_2 = *param_2 + cVar1;
  *(undefined1 *)(ulonglong)(uVar2 << 8) = *(undefined1 *)(ulonglong)(uVar2 << 8);
  cVar1 = in(4);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)uVar2,cVar1);
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

