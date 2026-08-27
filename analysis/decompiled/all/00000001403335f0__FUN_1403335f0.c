// Function: FUN_1403335f0
// Addr: 1403335f0
// Size: 752 bytes


uint FUN_1403335f0(undefined8 *param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
  int local_res18 [2];
  char *local_res20;
  
  if (5 < param_3) {
    return 0;
  }
  uVar10 = 0;
  if (0 < param_3) {
    plVar2 = (longlong *)param_1[1];
    puVar9 = param_1;
    do {
      puVar11 = (uint *)((ulonglong)uVar10 * 0x10 + param_2);
      if (*puVar11 == 0) {
        FUN_1403339f0(plVar2);
        if ((int)plVar2[3] < 2) {
          pcVar5 = (char *)*plVar2;
          pcVar7 = pcVar5 + -1;
          do {
            if ((char *)plVar2[2] <= pcVar5) break;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *plVar2 = (longlong)pcVar5;
            if ((cVar1 == '\r') || (cVar1 == '\n')) {
              *(undefined4 *)(plVar2 + 3) = 2;
              goto LAB_140333765;
            }
          } while (cVar1 != '\x1a');
          *(undefined4 *)(plVar2 + 3) = 3;
        }
        else {
          pcVar7 = (char *)0x0;
        }
      }
      else {
        if ((int)plVar2[3] < 1) {
          do {
            pcVar7 = (char *)*plVar2;
            if ((char *)plVar2[2] <= pcVar7) goto LAB_14033370e;
            cVar1 = *pcVar7;
            *plVar2 = (longlong)(pcVar7 + 1);
          } while ((cVar1 == ' ') || (cVar1 == '\t'));
          if ((cVar1 == '\r') || (cVar1 == '\n')) {
            *(undefined4 *)(plVar2 + 3) = 2;
          }
          else if (cVar1 == ';') {
            *(undefined4 *)(plVar2 + 3) = 1;
          }
          else if (cVar1 == '\x1a') {
LAB_14033370e:
            *(undefined4 *)(plVar2 + 3) = 3;
          }
          if ((int)plVar2[3] < 1) {
            pcVar5 = (char *)*plVar2;
            pcVar7 = pcVar5 + -1;
            do {
              if ((char *)plVar2[2] <= pcVar5) break;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              *plVar2 = (longlong)pcVar5;
              if ((cVar1 == ' ') || (cVar1 == '\t')) goto LAB_140333765;
              if ((cVar1 == '\r') || (cVar1 == '\n')) {
                *(undefined4 *)(plVar2 + 3) = 2;
                goto LAB_140333765;
              }
              if (cVar1 == ';') {
                *(undefined4 *)(plVar2 + 3) = 1;
                goto LAB_140333765;
              }
            } while (cVar1 != '\x1a');
            *(undefined4 *)(plVar2 + 3) = 3;
            goto LAB_140333765;
          }
        }
        pcVar7 = (char *)0x0;
      }
LAB_140333765:
      if (pcVar7 == (char *)0x0) {
        return uVar10;
      }
      local_res20 = pcVar7;
      if (5 < *puVar11) goto LAB_1403337f0;
      lVar8 = (*plVar2 - (longlong)pcVar7) + -1;
      switch(*puVar11) {
      default:
        uVar6 = FUN_1402f7fa0(*puVar9,(int)lVar8 + 1,local_res18);
        *(undefined8 *)(puVar11 + 2) = uVar6;
        puVar9 = param_1;
        if (local_res18[0] == 0) {
          FUN_1404210f0(uVar6,pcVar7,lVar8);
          *(undefined1 *)(lVar8 + *(longlong *)(puVar11 + 2)) = 0;
        }
        break;
      case 2:
        uVar4 = FUN_140332e50(&local_res20,pcVar7 + lVar8,0);
        goto LAB_1403337e7;
      case 3:
        pcVar5 = pcVar7 + lVar8;
        uVar4 = FUN_140332d30(&local_res20,pcVar5,10);
        if (local_res20 == pcVar7) {
LAB_140333880:
          uVar4 = 0;
        }
        else if ((local_res20 < pcVar5) && (*local_res20 == '#')) {
          pcVar7 = local_res20 + 1;
          local_res20 = pcVar7;
          uVar4 = FUN_140332d30(&local_res20,pcVar5,uVar4);
          if (local_res20 == pcVar7) goto LAB_140333880;
        }
LAB_1403337e7:
        puVar11[2] = uVar4;
        puVar9 = param_1;
        break;
      case 4:
        if ((lVar8 == 4) && (iVar3 = strncmp(pcVar7,"true",4), iVar3 == 0)) {
          *(undefined1 *)(puVar11 + 2) = 1;
          puVar9 = param_1;
        }
        else {
          *(undefined1 *)(puVar11 + 2) = 0;
          puVar9 = param_1;
        }
        break;
      case 5:
        if ((code *)puVar9[3] != (code *)0x0) {
          uVar4 = (*(code *)puVar9[3])(pcVar7,lVar8,puVar9[4]);
          goto LAB_1403337e7;
        }
        puVar11[2] = 0;
      }
LAB_1403337f0:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < param_3);
  }
  return uVar10;
}

