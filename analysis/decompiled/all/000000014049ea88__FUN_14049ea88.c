// Function: FUN_14049ea88
// Addr: 14049ea88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049eada) */

void FUN_14049ea88(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 (*unaff_RBX) [16];
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_XMM1 [16];
  
  uVar4 = in_EAX + 0x20000674;
  piVar5 = (int *)(ulonglong)uVar4;
  *piVar5 = *piVar5 + 1;
  unaff_RBX[-1][0xf] = unaff_RBX[-1][0xf] + (char)uVar4;
  *(char *)piVar5 = (char)*piVar5 + (char)uVar4;
  piVar5 = (int *)((ulonglong)uVar4 ^ 0xe6);
  *param_4 = *param_4;
  cVar2 = (char)piVar5;
  *(char *)piVar5 = (char)*piVar5 + cVar2;
  *(char *)piVar5 = (char)*piVar5 + (char)(uVar4 >> 8);
  *piVar5 = *piVar5 + 1;
  unaff_RBX[-1][0xf] = unaff_RBX[-1][0xf] + cVar2;
  *(char *)piVar5 = (char)*piVar5 + cVar2;
  uVar1 = (undefined3)(uVar4 >> 8);
  uVar6 = (ulonglong)CONCAT31(uVar1,cVar2) ^ 0xe6;
  bVar3 = (byte)uVar6;
  *param_4 = *param_4 + bVar3;
  *unaff_RDI = *unaff_RDI + param_1;
  uVar4 = CONCAT31(uVar1,bVar3 | *(byte *)(in_FS_OFFSET + uVar6));
  sysenter();
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  rsqrtps(in_XMM1,*unaff_RBX);
  uVar4 = uVar4 + 0xe4050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  pcVar7 = (char *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xff);
  *pcVar7 = *pcVar7 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

