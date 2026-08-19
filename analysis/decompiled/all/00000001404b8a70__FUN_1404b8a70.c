// Function: FUN_1404b8a70
// Addr: 1404b8a70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8aaa) overlaps instruction at (ram,0x0001404b8aa4)
    */

void FUN_1404b8a70(char *param_1,char param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  byte *in_RAX;
  byte *pbVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined1 *unaff_retaddr;
  undefined8 uStack_33;
  undefined1 auStack_2b [11];
  
  *(uint *)(in_RAX + 0x18) = *(uint *)(in_RAX + 0x18) & (uint)unaff_RBP;
  in_RAX[-8] = in_RAX[-8] + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  func_0x000118a18a87();
  cVar3 = '\x03';
  puVar2 = (undefined8 *)register0x00000020;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  puVar5 = (undefined8 *)auStack_2b;
  pbVar4 = (byte *)0xaebb320c;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  *unaff_retaddr = (char)param_1;
  cRam00000000aebb320c = cRam00000000aebb320c + '2';
  if (cRam00000000aebb320c < '\0') {
    pcVar1 = (char *)((longlong)param_1 * 5 + -0x1edeffb5);
    *pcVar1 = *pcVar1 + param_2;
  }
  else {
    puVar5 = &uStack_33;
    uStack_33 = 0x74100011;
    cRam00000000aebb320c = cRam00000000aebb320c + unaff_BL + -0xc;
    param_1[(longlong)register0x00000020] = param_1[(longlong)register0x00000020] | 0x32;
    pbVar4 = (byte *)(ulonglong)CONCAT31(0xaebb32,uRam94001e8aeb001e8a);
    *(uint *)CONCAT71(unaff_00000019,unaff_BL) = (uint)param_1;
    param_1 = (char *)(ulonglong)((uint)param_1 & (uint)&uStack_33);
  }
  *pbVar4 = *pbVar4 | (byte)pbVar4;
  if (param_1 == (char *)0x1 || *pbVar4 != 0) {
    *(undefined8 **)((longlong)puVar5 + -8) = puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

