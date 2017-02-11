.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_4 - Debug ]----------"
	@cd "Assignment1_4" && "$(MAKE)" -f  "Assignment1_4.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_4 - Debug ]----------"
	@cd "Assignment1_4" && "$(MAKE)" -f  "Assignment1_4.mk" clean
