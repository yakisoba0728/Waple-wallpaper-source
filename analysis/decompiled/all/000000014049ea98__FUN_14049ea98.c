// Function: FUN_14049ea98
// Addr: 14049ea98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049eada) */

void FUN_14049ea98(char param_1,undefined8 param_2,int *param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  char *pcVar4;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_XMM1 [16];
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  *(byte *)in_RAX = (char)*in_RAX + bVar1;
  *param_3 = *param_3 + 1;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + bVar1;
  *unaff_RDI = *unaff_RDI + param_1;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            bVar1 | *(byte *)(in_FS_OFFSET + (longlong)in_RAX));
  sysenter();
  *puVar3 = *puVar3 | (uint)puVar3;
  rsqrtps(in_XMM1,*(undefined1 (*) [16])CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uVar2 = (uint)puVar3 + 0xe4050002;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  pcVar4 = (char *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff);
  *pcVar4 = *pcVar4 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

