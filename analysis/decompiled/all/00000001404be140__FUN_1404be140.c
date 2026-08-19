// Function: FUN_1404be140
// Addr: 1404be140
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be140(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char cVar4;
  char cVar5;
  char cVar6;
  char unaff_SPL;
  longlong unaff_RBP;
  undefined8 *unaff_RDI;
  undefined1 *puVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  cVar4 = (char)param_1;
  *unaff_RDI = in_RAX;
  uVar2 = (uint)in_RAX & 0x25ab5f00;
  puVar3 = (undefined1 *)(ulonglong)uVar2;
  puVar3[-0x20] = puVar3[-0x20] + cVar4;
  *param_4 = *param_4 + unaff_SPL;
  *puVar3 = *puVar3;
  puVar3[-0x55] = puVar3[-0x55] + cVar4;
  puVar3 = (undefined1 *)(ulonglong)uVar2;
  puVar3[-0x20] = puVar3[-0x20] + cVar4;
  *param_4 = *param_4 + unaff_SPL;
  *puVar3 = *puVar3;
  puVar3[-0x55] = puVar3[-0x55];
  uVar2 = (uint)in_RAX & 0x25ab4800;
  pcVar1 = (undefined1 *)(ulonglong)uVar2 + unaff_RBP + 0x21004b;
  *pcVar1 = *pcVar1 + cVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((char)(uVar2 >> 8) * '\x02' + cVar5,*(undefined1 *)(ulonglong)uVar2));
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar6;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar2 >> 8);
  pcVar1 = (char *)((ulonglong)uVar2 + param_1);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)((ulonglong)uVar2 - 0x55);
  *pcVar1 = *pcVar1 + (char)uVar2;
  pcVar1 = (char *)(unaff_RBP + 0x1a21004b + (ulonglong)(uVar2 & 0x25ab4800));
  *pcVar1 = *pcVar1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

