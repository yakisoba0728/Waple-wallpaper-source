// Function: FUN_1404ccc80
// Addr: 1404ccc80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  char cVar4;
  undefined7 uVar5;
  char cVar6;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (code *)swi(0x32);
  uVar2 = (*pcVar1)();
  pcVar3 = (char *)(ulonglong)(uVar2 ^ 0x3532eb00);
  pcVar3[0x21004ccb] = pcVar3[0x21004ccb] + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x32ffcace] = pcVar3[-0x32ffcace] + cVar6;
  *(char *)CONCAT71(uVar5,cVar4) =
       *(char *)CONCAT71(uVar5,cVar4) + (char)((uVar2 ^ 0x3532eb00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

