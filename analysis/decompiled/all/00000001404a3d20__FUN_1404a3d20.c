// Function: FUN_1404a3d20
// Addr: 1404a3d20
// Size: 1 bytes


void FUN_1404a3d20(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  char cVar5;
  undefined1 *puVar6;
  char unaff_BH;
  longlong unaff_RDI;
  byte unaff_retaddr;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  puVar6 = (undefined1 *)(param_1 + -1);
  if (puVar6 == (undefined1 *)0x0 || (char)(unaff_BH + (char)param_2) == '\0') {
    (&stack0x00000000)[unaff_RDI] = (&stack0x00000000)[unaff_RDI] + cVar5;
    *puVar6 = *puVar6;
  }
  bVar3 = (char)in_RAX * '@' + 2;
  uVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3) + -0x6e0d700) -
          (uint)CARRY1(unaff_retaddr,bVar3);
  cVar5 = (char)puVar6 + cVar5;
  puVar6 = (undefined1 *)(CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar5) + -1);
  if (puVar6 == (undefined1 *)0x0 || cVar5 == '\0') {
    pcVar1 = (char *)((ulonglong)uVar4 + 0x3c);
    *pcVar1 = *pcVar1 + (char)uVar4;
    *puVar6 = *puVar6;
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

