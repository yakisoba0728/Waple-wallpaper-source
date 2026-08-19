// Function: FUN_1404a1440
// Addr: 1404a1440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1479) overlaps instruction at (ram,0x0001404a1478)
    */

void FUN_1404a1440(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *in_RAX;
  byte *unaff_RBX;
  undefined8 *puVar10;
  longlong unaff_RDI;
  int *piVar8;
  byte *pbVar9;
  
  do {
    uRam00000001b44f1448 = uRam00000001b44f1448 & (uint)in_RAX;
    bVar2 = (byte)in_RAX | *in_RAX;
    piVar8 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
    iVar3 = (int)piVar8;
    if (bVar2 == 0) {
      uVar4 = iVar3 + *piVar8;
      puVar7 = (uint *)(ulonglong)uVar4;
      if (uVar4 != 0 && SCARRY4(iVar3,*piVar8) == (int)uVar4 < 0) goto code_r0x0001404a141e;
      uVar6 = *puVar7;
      uVar5 = uVar4 + *puVar7;
      puVar7 = (uint *)(ulonglong)uVar5;
      register0x00000020 = *(BADSPACEBASE **)register0x00000020;
      uVar4 = (int)param_1 + *(int *)param_2 + (uint)CARRY4(uVar4,uVar6);
      param_1 = (char *)(ulonglong)uVar4;
      uRam00000001244f145c = uRam00000001244f145c & uVar5;
      *puVar7 = *puVar7 | uVar5;
      if ((int)*puVar7 < 1) {
        uVar5 = uVar5 + *puVar7;
        uVar6 = uVar5 + *(int *)(ulonglong)uVar5;
        pbVar9 = (byte *)(ulonglong)uVar6;
        if (SCARRY4(uVar5,*(int *)(ulonglong)uVar5)) {
          uRam00000001344f1484 = uRam00000001344f1484 & uVar6;
        }
        else {
          *param_1 = *param_1 + (char)register0x00000020;
          *param_2 = *param_2 | (byte)uVar6;
          *pbVar9 = *pbVar9 + (char)uVar4;
          piVar8 = (int *)((ulonglong)uVar6 ^ 0x10);
          pcVar1 = (char *)((longlong)piVar8 + (longlong)param_2 * 8 + -0x2f23fffd);
          *pcVar1 = *pcVar1 + (char)piVar8;
          iVar3 = *piVar8;
          *param_1 = *param_1 + (char)register0x00000020;
          pbVar9 = (byte *)(ulonglong)((int)piVar8 + iVar3 + 0xf4050002);
        }
        *pbVar9 = *pbVar9 | (byte)pbVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar7 = (uint *)(ulonglong)(uint)(iVar3 + *piVar8);
code_r0x0001404a141e:
      bRam082100006002c004 = (byte)puVar7;
      *param_1 = *param_1 + bRam082100006002c004;
      *unaff_RBX = *unaff_RBX | bRam082100006002c004;
      *(char *)puVar7 = (char)*puVar7 + (char)param_1;
    }
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + (char)*puVar7);
    param_1[(longlong)param_2] = param_1[(longlong)param_2] | (byte)param_2;
    *(uint **)((longlong)register0x00000020 + -8) = puVar7;
    *unaff_RBX = *unaff_RBX << 1 | (char)*unaff_RBX < '\0';
    *(char *)(unaff_RDI + -0x30) = *(char *)(unaff_RDI + -0x30) + (char)((ulonglong)param_2 >> 8);
    uVar4 = *puVar7;
    in_RAX = (byte *)(ulonglong)((uint)puVar7 + *puVar7);
    puVar10 = (undefined8 *)((longlong)register0x00000020 + -0x10);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10);
    *puVar10 = in_RAX;
    param_1 = (char *)(ulonglong)((int)param_1 + *(int *)param_2 + (uint)CARRY4((uint)puVar7,uVar4))
    ;
  } while( true );
}

