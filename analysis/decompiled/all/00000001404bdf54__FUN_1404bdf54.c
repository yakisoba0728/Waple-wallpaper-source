// Function: FUN_1404bdf54
// Addr: 1404bdf54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdf54(char *param_1,longlong param_2)

{
  char cVar4;
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar5;
  char cVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  *(char *)(unaff_RDI + -0x58c0ffdb) = *(char *)(unaff_RDI + -0x58c0ffdb) - (char)(in_EAX >> 8);
  pcVar2 = (char *)(ulonglong)(in_EAX & 0x4bde5c00);
  *param_1 = *param_1 + (char)((in_EAX & 0x4bde5c00) >> 8);
  *pcVar2 = *pcVar2;
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  pcVar3 = (char *)(ulonglong)(in_EAX & 0x1861c00);
  pcVar2 = (char *)(unaff_RSI + 0x4f + CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar2 = *pcVar2 + unaff_BL;
  cVar4 = (char)((in_EAX & 0x1861c00) >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3;
  *pcVar3 = *pcVar3 + cVar4;
  uVar1 = in_EAX & 0x1860800;
  pcVar2 = (undefined1 *)(ulonglong)uVar1 + unaff_RBP + 0x21004b;
  *pcVar2 = *pcVar2 + cVar5;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                   CONCAT11((char)(uVar1 >> 8) * '\x02' + cVar5,*(undefined1 *)(ulonglong)uVar1));
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  pcVar2 = (char *)(ulonglong)uVar1;
  param_1[param_2] = param_1[param_2] + cVar6;
  cVar4 = (char)(uVar1 >> 8);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar4;
  pcVar2[(longlong)param_1] = pcVar2[(longlong)param_1] + cVar6;
  *pcVar2 = *pcVar2 + cVar4;
  pcVar2 = (char *)(unaff_RBP + 0x1a21004b + (ulonglong)(uVar1 & 0x25a72800));
  *pcVar2 = *pcVar2 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

