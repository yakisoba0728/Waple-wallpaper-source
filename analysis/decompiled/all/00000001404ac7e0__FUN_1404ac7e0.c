// Function: FUN_1404ac7e0
// Addr: 1404ac7e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac7e0(char *param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  uint *in_RAX;
  undefined7 uVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  bVar5 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar5;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x10);
  *pcVar1 = *pcVar1 + bVar5 + CARRY1((byte)uVar4,bVar5);
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *param_3 = *param_3 + bVar5 + CARRY1(bVar2,unaff_BH);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (bVar5 | (byte)*in_RAX) + 0xc;
  param_1[CONCAT71(uVar6,cVar3)] = param_1[CONCAT71(uVar6,cVar3)];
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + 'J';
  LocalDescriptorTableRegister();
  *(undefined1 *)(unaff_RBP + -0x4bffefbb) = *(undefined1 *)(unaff_RBP + -0x4bffefbb);
  *param_1 = *param_1 + (char)(((uint)CONCAT71(uVar6,cVar3) | 0x34) + 0x10459000 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

