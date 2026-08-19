// Function: FUN_1404b8ae8
// Addr: 1404b8ae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8aaa) overlaps instruction at (ram,0x0001404b8aa4)
    */

void FUN_1404b8ae8(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  undefined1 auStack_43 [8];
  undefined1 auStack_3b [35];
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x5f0008f8;
  func_0x000118a18a87();
  puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar2 = '\x03';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  puVar5 = auStack_3b;
  pbVar3 = (byte *)0xaebb320c;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = (char)param_1;
  cRam00000000aebb320c = cRam00000000aebb320c + '2';
  if (cRam00000000aebb320c < '\0') {
    pcVar1 = (char *)((longlong)param_1 * 5 + -0x1edeffb5);
    *pcVar1 = *pcVar1 + param_2;
  }
  else {
    puVar5 = auStack_43;
    cRam00000000aebb320c = cRam00000000aebb320c + unaff_BL + -0xc;
    param_1[(longlong)&stack0xfffffffffffffff0] = param_1[(longlong)&stack0xfffffffffffffff0] | 0x32
    ;
    pbVar3 = (byte *)(ulonglong)CONCAT31(0xaebb32,uRam94001e8aeb001e8a);
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = (uint)param_1;
    param_1 = (char *)(ulonglong)((uint)param_1 & (uint)auStack_43);
  }
  *pbVar3 = *pbVar3 | (byte)pbVar3;
  if (param_1 == (char *)0x1 || *pbVar3 != 0) {
    *(undefined1 **)(puVar5 + -8) = puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

