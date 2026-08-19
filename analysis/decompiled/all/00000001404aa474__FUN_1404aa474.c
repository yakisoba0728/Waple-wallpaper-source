// Function: FUN_1404aa474
// Addr: 1404aa474
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa474(char param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char *in_RAX;
  char *pcVar5;
  char cVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar7;
  undefined6 unaff_0000001a;
  int *piVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  bVar2 = (char)in_RAX + *in_RAX;
  cVar3 = bVar2 - 0x2c;
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *piVar4 = *piVar4 + (uint)piVar4 + (uint)(0x2b < bVar2);
  cVar7 = unaff_BH + cVar6;
  pcVar5 = (char *)(ulonglong)((uint)piVar4 | 0xdf75e00);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar7,unaff_BL)) + 0x21004a);
  *pcVar1 = *pcVar1 + param_1;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar7 + cVar6,unaff_BL)) + 0x21004a);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

