// Function: FUN_1404b94b4
// Addr: 1404b94b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b94b4(char *param_1,char param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  undefined7 uVar7;
  char cVar8;
  char cVar9;
  int unaff_EBX;
  longlong unaff_RBP;
  int *unaff_RDI;
  uint *puVar6;
  
  cVar8 = (char)((ulonglong)param_1 >> 8);
  in_RAX[-0x67fffff2] = in_RAX[-0x67fffff2] + cVar8;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)in_RAX = uVar2;
  *in_RAX = param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (-1 < *in_RAX) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(char *)(unaff_RBP + 0x2e) =
         *(char *)(unaff_RBP + 0x2e) + (char)((uint)(unaff_EBX - *unaff_RDI) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar9 = (char)((uint)unaff_EBX >> 8);
  cVar3 = (char)in_RAX + cVar9;
  puVar6 = (uint *)CONCAT71(uVar7,cVar3);
  *puVar6 = *puVar6 | (uint)puVar6;
  bVar4 = cVar3 + cVar8;
  puVar6 = (uint *)CONCAT71(uVar7,(bVar4 | *(byte *)CONCAT71(uVar7,bVar4)) + (char)unaff_EBX);
  uVar5 = (uint)puVar6 | *puVar6;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + (char)param_1) - 0x57fffff3
                   );
  *pcVar1 = *pcVar1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

