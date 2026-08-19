// Function: FUN_1404c6d2c
// Addr: 1404c6d2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6d2c(undefined8 param_1,undefined2 param_2)

{
  undefined7 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar5;
  undefined8 in_RAX;
  undefined2 uVar6;
  char *pcVar4;
  
  cVar5 = (char)((ulonglong)in_RAX >> 8) + -0x2e;
  uVar1 = CONCAT61((int6)((ulonglong)in_RAX >> 0x10),cVar5);
  cVar5 = (char)param_2 + cVar5;
  uVar6 = CONCAT11((char)((ushort)param_2 >> 8),cVar5);
  cVar2 = in(uVar6);
  pcVar4 = (char *)CONCAT71(uVar1,cVar2);
  pcVar4[0x21004ae4] = pcVar4[0x21004ae4] + cVar5;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x1dffd114] = pcVar4[-0x1dffd114] + cVar2;
  uVar3 = in(uVar6);
  pcVar4 = (char *)(CONCAT71(uVar1,uVar3) + 0x21004ae4);
  *pcVar4 = *pcVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

