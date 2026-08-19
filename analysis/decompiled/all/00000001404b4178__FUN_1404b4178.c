// Function: FUN_1404b4178
// Addr: 1404b4178
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4178(byte *param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  uint in_EAX;
  uint uVar7;
  char *pcVar8;
  char cVar10;
  char cVar11;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  undefined8 in_MM1;
  undefined8 *unaff_retaddr;
  byte bVar3;
  int *piVar9;
  
  cVar10 = (char)((ulonglong)param_1 >> 8);
  pcVar8 = (char *)(ulonglong)(in_EAX | 0x17006f2);
  cVar11 = (char)((ushort)param_2 >> 8);
  if ((in_EAX | 0x17006f2) == 0) {
    *(char *)(unaff_RBP + -8) = *(char *)(unaff_RBP + -8) + cVar11;
    uVar4 = in(param_2);
    *unaff_RDI = uVar4;
    func_0x000118b04194();
    cVar10 = '\x14';
    do {
      unaff_retaddr = unaff_retaddr + -1;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
      *(undefined8 *)register0x00000020 = *unaff_retaddr;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = (char)param_2;
  *pcVar8 = *pcVar8 + cVar11;
  if (-1 < *pcVar8) {
    pcVar8[unaff_RBP * 2] = pcVar8[unaff_RBP * 2] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pshufw(in_MM1,*(undefined8 *)CONCAT44(unaff_00000034,unaff_ESI),0x60);
  uVar7 = in_EAX | 0x1700ef2;
  piVar9 = (int *)(ulonglong)uVar7;
  pbVar5 = (byte *)((longlong)piVar9 * 2);
  bVar1 = *pbVar5;
  bVar6 = (byte)uVar7;
  *pbVar5 = *pbVar5 + bVar6;
  bVar2 = *param_1;
  bVar3 = *param_1;
  *param_1 = bVar3 + bVar6 + CARRY1(bVar1,bVar6);
  *piVar9 = *piVar9 + uVar7 +
            (uint)(CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,CARRY1(bVar1,bVar6)));
  pcVar8 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar10,0xc)) + -0x53fff01c)
  ;
  *pcVar8 = *pcVar8 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

